
// Generated from src/grammar/NajaScript.g4 by ANTLR 4.13.1


#include "NajaScriptLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NajaScriptLexerStaticData final {
  NajaScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NajaScriptLexerStaticData(const NajaScriptLexerStaticData&) = delete;
  NajaScriptLexerStaticData(NajaScriptLexerStaticData&&) = delete;
  NajaScriptLexerStaticData& operator=(const NajaScriptLexerStaticData&) = delete;
  NajaScriptLexerStaticData& operator=(NajaScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag najascriptlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
NajaScriptLexerStaticData *najascriptlexerLexerStaticData = nullptr;

void najascriptlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (najascriptlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(najascriptlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NajaScriptLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "IDENTIFIER", "INTEGER", "FLOAT", 
      "STRING", "BOOLEAN", "COMMENT", "BLOCK_COMMENT", "WS", "ADD", "SUB", 
      "MUL", "DIV"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,25,184,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,5,13,102,8,13,10,13,12,13,105,9,
  	13,1,14,4,14,108,8,14,11,14,12,14,109,1,15,4,15,113,8,15,11,15,12,15,
  	114,1,15,1,15,4,15,119,8,15,11,15,12,15,120,1,16,1,16,1,16,1,16,5,16,
  	127,8,16,10,16,12,16,130,9,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,3,17,143,8,17,1,18,1,18,1,18,1,18,5,18,149,8,18,10,18,
  	12,18,152,9,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,160,8,19,10,19,12,19,
  	163,9,19,1,19,1,19,1,19,1,19,1,19,1,20,4,20,171,8,20,11,20,12,20,172,
  	1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,161,0,25,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,1,0,6,3,0,65,
  	90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,10,10,13,13,
  	34,34,2,0,10,10,13,13,3,0,9,10,13,13,32,32,193,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,53,1,0,0,0,5,55,1,0,0,0,7,57,1,0,
  	0,0,9,59,1,0,0,0,11,63,1,0,0,0,13,69,1,0,0,0,15,74,1,0,0,0,17,78,1,0,
  	0,0,19,83,1,0,0,0,21,89,1,0,0,0,23,91,1,0,0,0,25,93,1,0,0,0,27,99,1,0,
  	0,0,29,107,1,0,0,0,31,112,1,0,0,0,33,122,1,0,0,0,35,142,1,0,0,0,37,144,
  	1,0,0,0,39,155,1,0,0,0,41,170,1,0,0,0,43,176,1,0,0,0,45,178,1,0,0,0,47,
  	180,1,0,0,0,49,182,1,0,0,0,51,52,5,59,0,0,52,2,1,0,0,0,53,54,5,123,0,
  	0,54,4,1,0,0,0,55,56,5,125,0,0,56,6,1,0,0,0,57,58,5,61,0,0,58,8,1,0,0,
  	0,59,60,5,105,0,0,60,61,5,110,0,0,61,62,5,116,0,0,62,10,1,0,0,0,63,64,
  	5,102,0,0,64,65,5,108,0,0,65,66,5,111,0,0,66,67,5,97,0,0,67,68,5,116,
  	0,0,68,12,1,0,0,0,69,70,5,98,0,0,70,71,5,111,0,0,71,72,5,111,0,0,72,73,
  	5,108,0,0,73,14,1,0,0,0,74,75,5,115,0,0,75,76,5,116,0,0,76,77,5,114,0,
  	0,77,16,1,0,0,0,78,79,5,102,0,0,79,80,5,108,0,0,80,81,5,117,0,0,81,82,
  	5,120,0,0,82,18,1,0,0,0,83,84,5,112,0,0,84,85,5,114,0,0,85,86,5,105,0,
  	0,86,87,5,110,0,0,87,88,5,116,0,0,88,20,1,0,0,0,89,90,5,40,0,0,90,22,
  	1,0,0,0,91,92,5,41,0,0,92,24,1,0,0,0,93,94,5,105,0,0,94,95,5,110,0,0,
  	95,96,5,112,0,0,96,97,5,117,0,0,97,98,5,116,0,0,98,26,1,0,0,0,99,103,
  	7,0,0,0,100,102,7,1,0,0,101,100,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,
  	0,103,104,1,0,0,0,104,28,1,0,0,0,105,103,1,0,0,0,106,108,7,2,0,0,107,
  	106,1,0,0,0,108,109,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,30,1,
  	0,0,0,111,113,7,2,0,0,112,111,1,0,0,0,113,114,1,0,0,0,114,112,1,0,0,0,
  	114,115,1,0,0,0,115,116,1,0,0,0,116,118,5,46,0,0,117,119,7,2,0,0,118,
  	117,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,32,1,
  	0,0,0,122,128,5,34,0,0,123,127,8,3,0,0,124,125,5,92,0,0,125,127,5,34,
  	0,0,126,123,1,0,0,0,126,124,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,
  	129,1,0,0,0,129,131,1,0,0,0,130,128,1,0,0,0,131,132,5,34,0,0,132,34,1,
  	0,0,0,133,134,5,116,0,0,134,135,5,114,0,0,135,136,5,117,0,0,136,143,5,
  	101,0,0,137,138,5,102,0,0,138,139,5,97,0,0,139,140,5,108,0,0,140,141,
  	5,115,0,0,141,143,5,101,0,0,142,133,1,0,0,0,142,137,1,0,0,0,143,36,1,
  	0,0,0,144,145,5,47,0,0,145,146,5,47,0,0,146,150,1,0,0,0,147,149,8,4,0,
  	0,148,147,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,
  	153,1,0,0,0,152,150,1,0,0,0,153,154,6,18,0,0,154,38,1,0,0,0,155,156,5,
  	47,0,0,156,157,5,42,0,0,157,161,1,0,0,0,158,160,9,0,0,0,159,158,1,0,0,
  	0,160,163,1,0,0,0,161,162,1,0,0,0,161,159,1,0,0,0,162,164,1,0,0,0,163,
  	161,1,0,0,0,164,165,5,42,0,0,165,166,5,47,0,0,166,167,1,0,0,0,167,168,
  	6,19,0,0,168,40,1,0,0,0,169,171,7,5,0,0,170,169,1,0,0,0,171,172,1,0,0,
  	0,172,170,1,0,0,0,172,173,1,0,0,0,173,174,1,0,0,0,174,175,6,20,0,0,175,
  	42,1,0,0,0,176,177,5,43,0,0,177,44,1,0,0,0,178,179,5,45,0,0,179,46,1,
  	0,0,0,180,181,5,42,0,0,181,48,1,0,0,0,182,183,5,47,0,0,183,50,1,0,0,0,
  	11,0,103,109,114,120,126,128,142,150,161,172,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  najascriptlexerLexerStaticData = staticData.release();
}

}

NajaScriptLexer::NajaScriptLexer(CharStream *input) : Lexer(input) {
  NajaScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *najascriptlexerLexerStaticData->atn, najascriptlexerLexerStaticData->decisionToDFA, najascriptlexerLexerStaticData->sharedContextCache);
}

NajaScriptLexer::~NajaScriptLexer() {
  delete _interpreter;
}

std::string NajaScriptLexer::getGrammarFileName() const {
  return "NajaScript.g4";
}

const std::vector<std::string>& NajaScriptLexer::getRuleNames() const {
  return najascriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NajaScriptLexer::getChannelNames() const {
  return najascriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NajaScriptLexer::getModeNames() const {
  return najascriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NajaScriptLexer::getVocabulary() const {
  return najascriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NajaScriptLexer::getSerializedATN() const {
  return najascriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& NajaScriptLexer::getATN() const {
  return *najascriptlexerLexerStaticData->atn;
}




void NajaScriptLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  najascriptlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(najascriptlexerLexerOnceFlag, najascriptlexerLexerInitialize);
#endif
}
