
// Generated from src/grammar/NajaScript.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NajaScriptVisitor.h"


/**
 * This class provides an empty implementation of NajaScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NajaScriptBaseVisitor : public NajaScriptVisitor {
public:

  virtual std::any visitProgram(NajaScriptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(NajaScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(NajaScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(NajaScriptParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(NajaScriptParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStatement(NajaScriptParser::PrintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputStatement(NajaScriptParser::InputStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(NajaScriptParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(NajaScriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(NajaScriptParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(NajaScriptParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(NajaScriptParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(NajaScriptParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(NajaScriptParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

