#!/bin/bash

# Verificar se o arquivo de gramática foi criado
if [ ! -f "src/grammar/NajaScript.g4" ]; then
    echo "Gramática não encontrada. Criando diretório e copiando arquivo..."
    mkdir -p src/grammar
    cp NajaScript.g4 src/grammar/
fi

# Gerar o parser e lexer
cd src/grammar
antlr4 -Dlanguage=Cpp -visitor -no-listener NajaScript.g4
cd ../..

# Criar diretório de build se não existir
mkdir -p build
cd build

# Configurar e compilar
cmake ..
make

# Verificar se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Compilação bem-sucedida. Compilador NajaScript criado em build/najascript"
else
    echo "Erro na compilação."
    exit 1
fi

# Instruções de uso
echo "Para usar o compilador, execute:"
echo "./najascript <arquivo-najascript>"