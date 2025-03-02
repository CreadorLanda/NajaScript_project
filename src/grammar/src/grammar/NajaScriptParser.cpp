
// Generated from src/grammar/NajaScript.g4 by ANTLR 4.13.1


#include "NajaScriptVisitor.h"

#include "NajaScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NajaScriptParserStaticData final {
  NajaScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NajaScriptParserStaticData(const NajaScriptParserStaticData&) = delete;
  NajaScriptParserStaticData(NajaScriptParserStaticData&&) = delete;
  NajaScriptParserStaticData& operator=(const NajaScriptParserStaticData&) = delete;
  NajaScriptParserStaticData& operator=(NajaScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag najascriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
NajaScriptParserStaticData *najascriptParserStaticData = nullptr;

void najascriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (najascriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(najascriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NajaScriptParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "block", "variableDeclaration", "type", "printStatement", 
      "inputStatement", "expressionStatement", "expression", "assignmentExpression", 
      "additiveExpression", "multiplicativeExpression", "primaryExpression", 
      "literal"
    },
    std::vector<std::string>{
      "", "';'", "'{'", "'}'", "'='", "'int'", "'float'", "'bool'", "'str'", 
      "'flux'", "'print'", "'('", "')'", "'input'", "", "", "", "", "", 
      "", "", "", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
      "INTEGER", "FLOAT", "STRING", "BOOLEAN", "COMMENT", "BLOCK_COMMENT", 
      "WS", "ADD", "SUB", "MUL", "DIV"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,5,0,
  	30,8,0,10,0,12,0,33,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,
  	2,1,2,5,2,47,8,2,10,2,12,2,50,9,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,58,8,3,
  	1,3,3,3,61,8,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,3,5,70,8,5,1,6,1,6,1,6,1,6,
  	1,6,3,6,77,8,6,1,6,1,6,3,6,81,8,6,1,7,1,7,3,7,85,8,7,1,8,1,8,1,9,1,9,
  	1,9,1,9,3,9,93,8,9,1,10,1,10,1,10,5,10,98,8,10,10,10,12,10,101,9,10,1,
  	10,1,10,1,10,5,10,106,8,10,10,10,12,10,109,9,10,3,10,111,8,10,1,11,1,
  	11,1,11,5,11,116,8,11,10,11,12,11,119,9,11,1,11,1,11,1,11,5,11,124,8,
  	11,10,11,12,11,127,9,11,3,11,129,8,11,1,12,1,12,1,12,1,12,1,12,1,12,3,
  	12,137,8,12,1,13,1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	0,2,1,0,5,9,1,0,15,18,148,0,31,1,0,0,0,2,42,1,0,0,0,4,44,1,0,0,0,6,53,
  	1,0,0,0,8,62,1,0,0,0,10,64,1,0,0,0,12,71,1,0,0,0,14,82,1,0,0,0,16,86,
  	1,0,0,0,18,92,1,0,0,0,20,110,1,0,0,0,22,128,1,0,0,0,24,136,1,0,0,0,26,
  	138,1,0,0,0,28,30,3,2,1,0,29,28,1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,0,31,
  	32,1,0,0,0,32,34,1,0,0,0,33,31,1,0,0,0,34,35,5,0,0,1,35,1,1,0,0,0,36,
  	43,3,6,3,0,37,43,3,14,7,0,38,43,3,10,5,0,39,43,3,12,6,0,40,43,3,4,2,0,
  	41,43,5,1,0,0,42,36,1,0,0,0,42,37,1,0,0,0,42,38,1,0,0,0,42,39,1,0,0,0,
  	42,40,1,0,0,0,42,41,1,0,0,0,43,3,1,0,0,0,44,48,5,2,0,0,45,47,3,2,1,0,
  	46,45,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,
  	50,48,1,0,0,0,51,52,5,3,0,0,52,5,1,0,0,0,53,54,3,8,4,0,54,57,5,14,0,0,
  	55,56,5,4,0,0,56,58,3,16,8,0,57,55,1,0,0,0,57,58,1,0,0,0,58,60,1,0,0,
  	0,59,61,5,1,0,0,60,59,1,0,0,0,60,61,1,0,0,0,61,7,1,0,0,0,62,63,7,0,0,
  	0,63,9,1,0,0,0,64,65,5,10,0,0,65,66,5,11,0,0,66,67,3,16,8,0,67,69,5,12,
  	0,0,68,70,5,1,0,0,69,68,1,0,0,0,69,70,1,0,0,0,70,11,1,0,0,0,71,72,5,14,
  	0,0,72,73,5,4,0,0,73,74,5,13,0,0,74,76,5,11,0,0,75,77,5,17,0,0,76,75,
  	1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,80,5,12,0,0,79,81,5,1,0,0,80,79,
  	1,0,0,0,80,81,1,0,0,0,81,13,1,0,0,0,82,84,3,16,8,0,83,85,5,1,0,0,84,83,
  	1,0,0,0,84,85,1,0,0,0,85,15,1,0,0,0,86,87,3,18,9,0,87,17,1,0,0,0,88,93,
  	3,20,10,0,89,90,5,14,0,0,90,91,5,4,0,0,91,93,3,18,9,0,92,88,1,0,0,0,92,
  	89,1,0,0,0,93,19,1,0,0,0,94,99,3,22,11,0,95,96,5,22,0,0,96,98,3,22,11,
  	0,97,95,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,111,1,
  	0,0,0,101,99,1,0,0,0,102,107,3,22,11,0,103,104,5,23,0,0,104,106,3,22,
  	11,0,105,103,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,
  	108,111,1,0,0,0,109,107,1,0,0,0,110,94,1,0,0,0,110,102,1,0,0,0,111,21,
  	1,0,0,0,112,117,3,24,12,0,113,114,5,24,0,0,114,116,3,24,12,0,115,113,
  	1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,129,1,0,0,
  	0,119,117,1,0,0,0,120,125,3,24,12,0,121,122,5,25,0,0,122,124,3,24,12,
  	0,123,121,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,
  	129,1,0,0,0,127,125,1,0,0,0,128,112,1,0,0,0,128,120,1,0,0,0,129,23,1,
  	0,0,0,130,137,5,14,0,0,131,137,3,26,13,0,132,133,5,11,0,0,133,134,3,16,
  	8,0,134,135,5,12,0,0,135,137,1,0,0,0,136,130,1,0,0,0,136,131,1,0,0,0,
  	136,132,1,0,0,0,137,25,1,0,0,0,138,139,7,1,0,0,139,27,1,0,0,0,17,31,42,
  	48,57,60,69,76,80,84,92,99,107,110,117,125,128,136
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  najascriptParserStaticData = staticData.release();
}

}

NajaScriptParser::NajaScriptParser(TokenStream *input) : NajaScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NajaScriptParser::NajaScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NajaScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *najascriptParserStaticData->atn, najascriptParserStaticData->decisionToDFA, najascriptParserStaticData->sharedContextCache, options);
}

NajaScriptParser::~NajaScriptParser() {
  delete _interpreter;
}

const atn::ATN& NajaScriptParser::getATN() const {
  return *najascriptParserStaticData->atn;
}

std::string NajaScriptParser::getGrammarFileName() const {
  return "NajaScript.g4";
}

const std::vector<std::string>& NajaScriptParser::getRuleNames() const {
  return najascriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& NajaScriptParser::getVocabulary() const {
  return najascriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NajaScriptParser::getSerializedATN() const {
  return najascriptParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

NajaScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NajaScriptParser::ProgramContext::EOF() {
  return getToken(NajaScriptParser::EOF, 0);
}

std::vector<NajaScriptParser::StatementContext *> NajaScriptParser::ProgramContext::statement() {
  return getRuleContexts<NajaScriptParser::StatementContext>();
}

NajaScriptParser::StatementContext* NajaScriptParser::ProgramContext::statement(size_t i) {
  return getRuleContext<NajaScriptParser::StatementContext>(i);
}


size_t NajaScriptParser::ProgramContext::getRuleIndex() const {
  return NajaScriptParser::RuleProgram;
}


std::any NajaScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::ProgramContext* NajaScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NajaScriptParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 511974) != 0)) {
      setState(28);
      statement();
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(34);
    match(NajaScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NajaScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::VariableDeclarationContext* NajaScriptParser::StatementContext::variableDeclaration() {
  return getRuleContext<NajaScriptParser::VariableDeclarationContext>(0);
}

NajaScriptParser::ExpressionStatementContext* NajaScriptParser::StatementContext::expressionStatement() {
  return getRuleContext<NajaScriptParser::ExpressionStatementContext>(0);
}

NajaScriptParser::PrintStatementContext* NajaScriptParser::StatementContext::printStatement() {
  return getRuleContext<NajaScriptParser::PrintStatementContext>(0);
}

NajaScriptParser::InputStatementContext* NajaScriptParser::StatementContext::inputStatement() {
  return getRuleContext<NajaScriptParser::InputStatementContext>(0);
}

NajaScriptParser::BlockContext* NajaScriptParser::StatementContext::block() {
  return getRuleContext<NajaScriptParser::BlockContext>(0);
}


size_t NajaScriptParser::StatementContext::getRuleIndex() const {
  return NajaScriptParser::RuleStatement;
}


std::any NajaScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::StatementContext* NajaScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, NajaScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(37);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(38);
      printStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(39);
      inputStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(40);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(41);
      match(NajaScriptParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

NajaScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NajaScriptParser::StatementContext *> NajaScriptParser::BlockContext::statement() {
  return getRuleContexts<NajaScriptParser::StatementContext>();
}

NajaScriptParser::StatementContext* NajaScriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<NajaScriptParser::StatementContext>(i);
}


size_t NajaScriptParser::BlockContext::getRuleIndex() const {
  return NajaScriptParser::RuleBlock;
}


std::any NajaScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::BlockContext* NajaScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, NajaScriptParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(NajaScriptParser::T__1);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 511974) != 0)) {
      setState(45);
      statement();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    match(NajaScriptParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

NajaScriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::TypeContext* NajaScriptParser::VariableDeclarationContext::type() {
  return getRuleContext<NajaScriptParser::TypeContext>(0);
}

tree::TerminalNode* NajaScriptParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(NajaScriptParser::IDENTIFIER, 0);
}

NajaScriptParser::ExpressionContext* NajaScriptParser::VariableDeclarationContext::expression() {
  return getRuleContext<NajaScriptParser::ExpressionContext>(0);
}


size_t NajaScriptParser::VariableDeclarationContext::getRuleIndex() const {
  return NajaScriptParser::RuleVariableDeclaration;
}


std::any NajaScriptParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::VariableDeclarationContext* NajaScriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, NajaScriptParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    type();
    setState(54);
    match(NajaScriptParser::IDENTIFIER);
    setState(57);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NajaScriptParser::T__3) {
      setState(55);
      match(NajaScriptParser::T__3);
      setState(56);
      expression();
    }
    setState(60);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(59);
      match(NajaScriptParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

NajaScriptParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NajaScriptParser::TypeContext::getRuleIndex() const {
  return NajaScriptParser::RuleType;
}


std::any NajaScriptParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::TypeContext* NajaScriptParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 8, NajaScriptParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 992) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

NajaScriptParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::ExpressionContext* NajaScriptParser::PrintStatementContext::expression() {
  return getRuleContext<NajaScriptParser::ExpressionContext>(0);
}


size_t NajaScriptParser::PrintStatementContext::getRuleIndex() const {
  return NajaScriptParser::RulePrintStatement;
}


std::any NajaScriptParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::PrintStatementContext* NajaScriptParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, NajaScriptParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(NajaScriptParser::T__9);
    setState(65);
    match(NajaScriptParser::T__10);
    setState(66);
    expression();
    setState(67);
    match(NajaScriptParser::T__11);
    setState(69);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(68);
      match(NajaScriptParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputStatementContext ------------------------------------------------------------------

NajaScriptParser::InputStatementContext::InputStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NajaScriptParser::InputStatementContext::IDENTIFIER() {
  return getToken(NajaScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* NajaScriptParser::InputStatementContext::STRING() {
  return getToken(NajaScriptParser::STRING, 0);
}


size_t NajaScriptParser::InputStatementContext::getRuleIndex() const {
  return NajaScriptParser::RuleInputStatement;
}


std::any NajaScriptParser::InputStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitInputStatement(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::InputStatementContext* NajaScriptParser::inputStatement() {
  InputStatementContext *_localctx = _tracker.createInstance<InputStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, NajaScriptParser::RuleInputStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(NajaScriptParser::IDENTIFIER);
    setState(72);
    match(NajaScriptParser::T__3);
    setState(73);
    match(NajaScriptParser::T__12);
    setState(74);
    match(NajaScriptParser::T__10);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NajaScriptParser::STRING) {
      setState(75);
      match(NajaScriptParser::STRING);
    }
    setState(78);
    match(NajaScriptParser::T__11);
    setState(80);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(79);
      match(NajaScriptParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

NajaScriptParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::ExpressionContext* NajaScriptParser::ExpressionStatementContext::expression() {
  return getRuleContext<NajaScriptParser::ExpressionContext>(0);
}


size_t NajaScriptParser::ExpressionStatementContext::getRuleIndex() const {
  return NajaScriptParser::RuleExpressionStatement;
}


std::any NajaScriptParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::ExpressionStatementContext* NajaScriptParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, NajaScriptParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    expression();
    setState(84);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(83);
      match(NajaScriptParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NajaScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::AssignmentExpressionContext* NajaScriptParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<NajaScriptParser::AssignmentExpressionContext>(0);
}


size_t NajaScriptParser::ExpressionContext::getRuleIndex() const {
  return NajaScriptParser::RuleExpression;
}


std::any NajaScriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::ExpressionContext* NajaScriptParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, NajaScriptParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

NajaScriptParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NajaScriptParser::AdditiveExpressionContext* NajaScriptParser::AssignmentExpressionContext::additiveExpression() {
  return getRuleContext<NajaScriptParser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* NajaScriptParser::AssignmentExpressionContext::IDENTIFIER() {
  return getToken(NajaScriptParser::IDENTIFIER, 0);
}

NajaScriptParser::AssignmentExpressionContext* NajaScriptParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<NajaScriptParser::AssignmentExpressionContext>(0);
}


size_t NajaScriptParser::AssignmentExpressionContext::getRuleIndex() const {
  return NajaScriptParser::RuleAssignmentExpression;
}


std::any NajaScriptParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::AssignmentExpressionContext* NajaScriptParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, NajaScriptParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      additiveExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      match(NajaScriptParser::IDENTIFIER);
      setState(90);
      match(NajaScriptParser::T__3);
      setState(91);
      assignmentExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

NajaScriptParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NajaScriptParser::MultiplicativeExpressionContext *> NajaScriptParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<NajaScriptParser::MultiplicativeExpressionContext>();
}

NajaScriptParser::MultiplicativeExpressionContext* NajaScriptParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<NajaScriptParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NajaScriptParser::AdditiveExpressionContext::ADD() {
  return getTokens(NajaScriptParser::ADD);
}

tree::TerminalNode* NajaScriptParser::AdditiveExpressionContext::ADD(size_t i) {
  return getToken(NajaScriptParser::ADD, i);
}

std::vector<tree::TerminalNode *> NajaScriptParser::AdditiveExpressionContext::SUB() {
  return getTokens(NajaScriptParser::SUB);
}

tree::TerminalNode* NajaScriptParser::AdditiveExpressionContext::SUB(size_t i) {
  return getToken(NajaScriptParser::SUB, i);
}


size_t NajaScriptParser::AdditiveExpressionContext::getRuleIndex() const {
  return NajaScriptParser::RuleAdditiveExpression;
}


std::any NajaScriptParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::AdditiveExpressionContext* NajaScriptParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, NajaScriptParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      multiplicativeExpression();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NajaScriptParser::ADD) {
        setState(95);
        match(NajaScriptParser::ADD);
        setState(96);
        multiplicativeExpression();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      multiplicativeExpression();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NajaScriptParser::SUB) {
        setState(103);
        match(NajaScriptParser::SUB);
        setState(104);
        multiplicativeExpression();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

NajaScriptParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NajaScriptParser::PrimaryExpressionContext *> NajaScriptParser::MultiplicativeExpressionContext::primaryExpression() {
  return getRuleContexts<NajaScriptParser::PrimaryExpressionContext>();
}

NajaScriptParser::PrimaryExpressionContext* NajaScriptParser::MultiplicativeExpressionContext::primaryExpression(size_t i) {
  return getRuleContext<NajaScriptParser::PrimaryExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NajaScriptParser::MultiplicativeExpressionContext::MUL() {
  return getTokens(NajaScriptParser::MUL);
}

tree::TerminalNode* NajaScriptParser::MultiplicativeExpressionContext::MUL(size_t i) {
  return getToken(NajaScriptParser::MUL, i);
}

std::vector<tree::TerminalNode *> NajaScriptParser::MultiplicativeExpressionContext::DIV() {
  return getTokens(NajaScriptParser::DIV);
}

tree::TerminalNode* NajaScriptParser::MultiplicativeExpressionContext::DIV(size_t i) {
  return getToken(NajaScriptParser::DIV, i);
}


size_t NajaScriptParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return NajaScriptParser::RuleMultiplicativeExpression;
}


std::any NajaScriptParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::MultiplicativeExpressionContext* NajaScriptParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, NajaScriptParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      primaryExpression();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NajaScriptParser::MUL) {
        setState(113);
        match(NajaScriptParser::MUL);
        setState(114);
        primaryExpression();
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      primaryExpression();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NajaScriptParser::DIV) {
        setState(121);
        match(NajaScriptParser::DIV);
        setState(122);
        primaryExpression();
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

NajaScriptParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NajaScriptParser::PrimaryExpressionContext::IDENTIFIER() {
  return getToken(NajaScriptParser::IDENTIFIER, 0);
}

NajaScriptParser::LiteralContext* NajaScriptParser::PrimaryExpressionContext::literal() {
  return getRuleContext<NajaScriptParser::LiteralContext>(0);
}

NajaScriptParser::ExpressionContext* NajaScriptParser::PrimaryExpressionContext::expression() {
  return getRuleContext<NajaScriptParser::ExpressionContext>(0);
}


size_t NajaScriptParser::PrimaryExpressionContext::getRuleIndex() const {
  return NajaScriptParser::RulePrimaryExpression;
}


std::any NajaScriptParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::PrimaryExpressionContext* NajaScriptParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, NajaScriptParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NajaScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(130);
        match(NajaScriptParser::IDENTIFIER);
        break;
      }

      case NajaScriptParser::INTEGER:
      case NajaScriptParser::FLOAT:
      case NajaScriptParser::STRING:
      case NajaScriptParser::BOOLEAN: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        literal();
        break;
      }

      case NajaScriptParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(132);
        match(NajaScriptParser::T__10);
        setState(133);
        expression();
        setState(134);
        match(NajaScriptParser::T__11);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

NajaScriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NajaScriptParser::LiteralContext::INTEGER() {
  return getToken(NajaScriptParser::INTEGER, 0);
}

tree::TerminalNode* NajaScriptParser::LiteralContext::FLOAT() {
  return getToken(NajaScriptParser::FLOAT, 0);
}

tree::TerminalNode* NajaScriptParser::LiteralContext::STRING() {
  return getToken(NajaScriptParser::STRING, 0);
}

tree::TerminalNode* NajaScriptParser::LiteralContext::BOOLEAN() {
  return getToken(NajaScriptParser::BOOLEAN, 0);
}


size_t NajaScriptParser::LiteralContext::getRuleIndex() const {
  return NajaScriptParser::RuleLiteral;
}


std::any NajaScriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NajaScriptVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

NajaScriptParser::LiteralContext* NajaScriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, NajaScriptParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 491520) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void NajaScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  najascriptParserInitialize();
#else
  ::antlr4::internal::call_once(najascriptParserOnceFlag, najascriptParserInitialize);
#endif
}
