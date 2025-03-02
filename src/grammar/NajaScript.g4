grammar NajaScript;

// Parser Rules
program
    : statement* EOF
    ;

statement
    : variableDeclaration
    | expressionStatement
    | printStatement
    | inputStatement
    | block
    | ';'
    ;

block
    : '{' statement* '}'
    ;

variableDeclaration
    : type IDENTIFIER ('=' expression)? ';'?
    ;

type
    : 'int'
    | 'float'
    | 'bool'
    | 'str'
    | 'flux'
    ;

printStatement
    : 'print' '(' expression ')' ';'?
    ;

inputStatement
    : IDENTIFIER '=' 'input' '(' (STRING)? ')' ';'?
    ;

expressionStatement
    : expression ';'?
    ;

expression
    : assignmentExpression
    ;

assignmentExpression
    : additiveExpression
    | IDENTIFIER '=' assignmentExpression
    ;

additiveExpression
    : multiplicativeExpression (ADD multiplicativeExpression)*
    | multiplicativeExpression (SUB multiplicativeExpression)*
    ;

multiplicativeExpression
    : primaryExpression (MUL primaryExpression)*
    | primaryExpression (DIV primaryExpression)*
    ;

primaryExpression
    : IDENTIFIER
    | literal
    | '(' expression ')'
    ;

literal
    : INTEGER
    | FLOAT
    | STRING
    | BOOLEAN
    ;

// Lexer Rules
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;
INTEGER: [0-9]+;
FLOAT: [0-9]+'.'[0-9]+;
STRING: '"' (~["\r\n] | '\\"')* '"';
BOOLEAN: 'true' | 'false';

COMMENT: '//' ~[\r\n]* -> skip;
BLOCK_COMMENT: '/*' .*? '*/' -> skip;
WS: [ \t\r\n]+ -> skip;

// Token definitions
ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';