
// Generated from src/grammar/NajaScript.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NajaScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NajaScriptParser.
 */
class  NajaScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NajaScriptParser.
   */
    virtual std::any visitProgram(NajaScriptParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(NajaScriptParser::StatementContext *context) = 0;

    virtual std::any visitBlock(NajaScriptParser::BlockContext *context) = 0;

    virtual std::any visitVariableDeclaration(NajaScriptParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitType(NajaScriptParser::TypeContext *context) = 0;

    virtual std::any visitPrintStatement(NajaScriptParser::PrintStatementContext *context) = 0;

    virtual std::any visitInputStatement(NajaScriptParser::InputStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(NajaScriptParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitExpression(NajaScriptParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(NajaScriptParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(NajaScriptParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(NajaScriptParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitPrimaryExpression(NajaScriptParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitLiteral(NajaScriptParser::LiteralContext *context) = 0;


};

