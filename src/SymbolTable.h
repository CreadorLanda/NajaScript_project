#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <string>
#include <map>
#include <vector>
#include <memory>

enum class SymbolType {
    INT,
    FLOAT,
    BOOL,
    STRING,
    FLUX
};

class Symbol {
public:
    Symbol(const std::string& name, SymbolType type)
        : name(name), type(type) {}

    std::string getName() const { return name; }
    SymbolType getType() const { return type; }

private:
    std::string name;
    SymbolType type;
};

class SymbolTable {
public:
    SymbolTable() {
        // Inicializa com um escopo global
        enterScope();
    }

    void enterScope() {
        scopes.push_back(std::map<std::string, std::shared_ptr<Symbol>>());
    }

    void exitScope() {
        if (scopes.size() > 1) {
            scopes.pop_back();
        }
    }

    bool add(const std::string& name, SymbolType type) {
        // Verifica se o símbolo já existe no escopo atual
        if (scopes.back().find(name) != scopes.back().end()) {
            return false; // Símbolo já declarado no escopo atual
        }

        // Adiciona o símbolo
        scopes.back()[name] = std::make_shared<Symbol>(name, type);
        return true;
    }

    std::shared_ptr<Symbol> lookup(const std::string& name) {
        // Busca o símbolo de trás para frente (do escopo mais interno para o mais externo)
        for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
            auto symbolIt = it->find(name);
            if (symbolIt != it->end()) {
                return symbolIt->second;
            }
        }
        return nullptr; // Símbolo não encontrado
    }

    static SymbolType stringToType(const std::string& typeStr) {
        if (typeStr == "int") return SymbolType::INT;
        if (typeStr == "float") return SymbolType::FLOAT;
        if (typeStr == "bool") return SymbolType::BOOL;
        if (typeStr == "str") return SymbolType::STRING;
        if (typeStr == "flux") return SymbolType::FLUX;
        
        // Tipo desconhecido, trataremos como erro
        throw std::runtime_error("Unknown type: " + typeStr);
    }

private:
    std::vector<std::map<std::string, std::shared_ptr<Symbol>>> scopes;
};

#endif // SYMBOL_TABLE_H