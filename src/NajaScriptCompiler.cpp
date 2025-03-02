#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <memory>

#include <antlr4-runtime.h>
#include "grammar/NajaScriptLexer.h"
#include "grammar/NajaScriptParser.h"
#include "SymbolTable.h"
#include "CodeGenerator.h"
#include "FluxManager.h"

using namespace antlr4;
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: NajaScriptCompiler <input-file>" << endl;
        return 1;
    }

    // Lê o arquivo de entrada
    ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open input file " << argv[1] << endl;
        return 1;
    }

    stringstream buffer;
    buffer << inputFile.rdbuf();
    string inputText = buffer.str();
    inputFile.close();

    // Cria o input stream
    ANTLRInputStream input(inputText);

    // Cria o lexer
    NajaScriptLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Cria o parser
    NajaScriptParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    // Verifica erros de sintaxe
    if (parser.getNumberOfSyntaxErrors() > 0) {
        cerr << "Syntax errors detected. Compilation aborted." << endl;
        return 1;
    }

    // Cria o symbol table
    shared_ptr<SymbolTable> symbolTable = make_shared<SymbolTable>();
    
    // Cria o flux manager
    shared_ptr<FluxManager> fluxManager = make_shared<FluxManager>();
    
    // Cria o visitor para análise semântica e geração de código
    CodeGenerator codeGen(symbolTable, fluxManager);
    codeGen.visit(tree);

    // Gera o código
    string outputCode = codeGen.generate(tree);

    // Escreve o código gerado em um arquivo
    string outputFilename = string(argv[1]) + ".cpp";
    ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open output file " << outputFilename << endl;
        return 1;
    }
    outputFile << outputCode;
    outputFile.close();

    cout << "Compilation successful. Output file: " << outputFilename << endl;

    return 0;
}