#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

#include "grammar/NajaScriptParser.h"
#include "grammar/NajaScriptBaseVisitor.h"
#include "SymbolTable.h"
#include "FluxManager.h"
#include <memory>
#include <sstream>
#include <string>

class CodeGenerator : public NajaScriptBaseVisitor {
public:
    CodeGenerator(std::shared_ptr<SymbolTable> symbolTable, std::shared_ptr<FluxManager> fluxManager)
        : symbolTable(symbolTable), fluxManager(fluxManager) {}

    std::string generate(antlr4::tree::ParseTree* tree) {
        std::stringstream code;
        
        // Cabeçalhos e includes
        code << "#include <iostream>\n";
        code << "#include <string>\n";
        code << "#include <map>\n";
        code << "#include <functional>\n\n";
        
        // Classe para gerenciar variáveis flux
        code << "// Classe para gerenciar variáveis flux\n";
        code << "class FluxValue {\n";
        code << "public:\n";
        code << "    template<typename T>\n";
        code << "    FluxValue(std::function<T()> supplier) : supplier([supplier]() -> void* {\n";
        code << "        auto value = supplier();\n";
        code << "        return new T(value);\n";
        code << "    }), type(typeid(T).name()) {}\n\n";
        
        code << "    template<typename T>\n";
        code << "    T getValue() {\n";
        code << "        if (dirty) {\n";
        code << "            if (cachedValue) delete cachedValue;\n";
        code << "            cachedValue = supplier();\n";
        code << "            dirty = false;\n";
        code << "        }\n";
        code << "        return *static_cast<T*>(cachedValue);\n";
        code << "    }\n\n";
        
        code << "    void markDirty() { dirty = true; }\n\n";
        
        code << "private:\n";
        code << "    std::function<void*()> supplier;\n";
        code << "    std::string type;\n";
        code << "    void* cachedValue = nullptr;\n";
        code << "    bool dirty = true;\n";
        code << "};\n\n";
        
        // Função main
        code << "int main() {\n";
        
        // Visita a árvore de parse para gerar código
        visit(tree);
        
        // Adiciona o código gerado
        code << codeBuffer.str();
        
        // Fecha a função main
        code << "    return 0;\n";
        code << "}\n";
        
        return code.str();
    }

    virtual antlrcpp::Any visitVariableDeclaration(NajaScriptParser::VariableDeclarationContext *ctx) override {
        std::string typeStr = ctx->type()->getText();
        std::string name = ctx->IDENTIFIER()->getText();
        
        // Mapeia os tipos do NajaScript para C++
        std::string cppType;
        if (typeStr == "int") cppType = "int";
        else if (typeStr == "float") cppType = "double";
        else if (typeStr == "bool") cppType = "bool";
        else if (typeStr == "str") cppType = "std::string";
        else if (typeStr == "flux") {
            // Tratamento especial para flux
            auto fluxExpr = fluxManager->getFlux(name);
            if (fluxExpr) {
                codeBuffer << "    FluxValue " << name << "([&]() {\n";
                codeBuffer << "        return " << fluxExpr->getExpression() << ";\n";
                codeBuffer << "    });\n";
                return nullptr;
            }
            // Se chegou aqui, é um flux sem expressão conhecida
            cppType = "FluxValue";
        }
        
        // Declara a variável
        codeBuffer << "    " << cppType << " " << name;
        
        // Se tiver uma expressão de inicialização
        if (ctx->expression()) {
            codeBuffer << " = ";
            visit(ctx->expression());
        }
        
        codeBuffer << ";\n";
        
        return nullptr;
    }

    virtual antlrcpp::Any visitPrintStatement(NajaScriptParser::PrintStatementContext *ctx) override {
        codeBuffer << "    std::cout << ";
        visit(ctx->expression());
        codeBuffer << " << std::endl;\n";
        return nullptr;
    }

    virtual antlrcpp::Any visitInputStatement(NajaScriptParser::InputStatementContext *ctx) override {
        std::string varName = ctx->IDENTIFIER()->getText();
        
        // Se tiver uma string como prompt
        if (ctx->STRING()) {
            std::string prompt = ctx->STRING()->getText();
            codeBuffer << "    std::cout << " << prompt << ";\n";
        }
        
        codeBuffer << "    std::cin >> " << varName << ";\n";
        
        return nullptr;
    }

    virtual antlrcpp::Any visitAssignmentExpression(NajaScriptParser::AssignmentExpressionContext *ctx) override {
        if (ctx->IDENTIFIER()) {
            std::string name = ctx->IDENTIFIER()->getText();
            codeBuffer << name << " = ";
            visit(ctx->assignmentExpression());
            
            // Verifica se há dependentes flux que precisam ser atualizados
            auto dependents = fluxManager->getDependents(name);
            for (const auto& dependent : dependents) {
                codeBuffer << "    " << dependent << ".markDirty();\n";
            }
        } else {
            visit(ctx->additiveExpression());
        }
        
        return nullptr;
    }

    virtual antlrcpp::Any visitAdditiveExpression(NajaScriptParser::AdditiveExpressionContext* ctx) override {
        // Visit first multiplicative expression
        visit(ctx->multiplicativeExpression(0));

        // Get all ADD and SUB tokens
        auto addTokens = ctx->ADD();
        auto subTokens = ctx->SUB();
        size_t opIndex = 0;

        // Process additional expressions
        for (size_t i = 1; i < ctx->multiplicativeExpression().size(); i++) {
            // Determine operator
            bool isAdd = opIndex < addTokens.size();
            codeBuffer << " " << (isAdd ? "+" : "-") << " ";
            visit(ctx->multiplicativeExpression(i));
            opIndex++;
        }
        return nullptr;
    }

    virtual antlrcpp::Any visitMultiplicativeExpression(NajaScriptParser::MultiplicativeExpressionContext* ctx) override {
        // Visit first primary expression
        visit(ctx->primaryExpression(0));

        // Get all MUL and DIV tokens
        auto mulTokens = ctx->MUL();
        auto divTokens = ctx->DIV();
        size_t opIndex = 0;

        // Process additional expressions
        for (size_t i = 1; i < ctx->primaryExpression().size(); i++) {
            // Determine operator
            bool isMul = opIndex < mulTokens.size();
            codeBuffer << " " << (isMul ? "*" : "/") << " ";
            visit(ctx->primaryExpression(i));
            opIndex++;
        }
        return nullptr;
    }

    virtual antlrcpp::Any visitPrimaryExpression(NajaScriptParser::PrimaryExpressionContext *ctx) override {
        if (ctx->IDENTIFIER()) {
            std::string name = ctx->IDENTIFIER()->getText();
            auto symbol = symbolTable->lookup(name);
            
            if (symbol && symbol->getType() == SymbolType::FLUX) {
                // Para variáveis flux, precisamos chamar getValue()
                codeBuffer << name << ".getValue()";
            } else {
                codeBuffer << name;
            }
        } else if (ctx->literal()) {
            visit(ctx->literal());
        } else {
            codeBuffer << "(";
            visit(ctx->expression());
            codeBuffer << ")";
        }
        return nullptr;
    }

    virtual antlrcpp::Any visitLiteral(NajaScriptParser::LiteralContext *ctx) override {
        if (ctx->STRING()) {
            codeBuffer << ctx->STRING()->getText();
        } else if (ctx->INTEGER() || ctx->FLOAT() || ctx->BOOLEAN()) {
            codeBuffer << ctx->getText();
        }
        return nullptr;
    }

private:
    std::shared_ptr<SymbolTable> symbolTable;
    std::shared_ptr<FluxManager> fluxManager;
    std::stringstream codeBuffer;
};

#endif // CODE_GENERATOR_H