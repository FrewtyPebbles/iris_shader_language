grammar iris_grammar;

options { language=Cpp; }

root: (function_definition | statement | NEWLINE)* EOF;

// missing type implies none for functions
function_definition: 'func' LABEL '(' (declaration (',' declaration)*)? ','? ')' ('->' type)? (block);

// ternary
conditional: 'if' expr 'then' expr 'else' expr;

// if statement
conditional_block: 'if' expr (block | statement) ('elif' expr (block | statement))* ( 'else' (block | statement))?;

// block
block: '{' statement* '}';

// statement
statement: expr | declaration (NEWLINE | ';');

expr
    // Primary/Leaf nodes (The "base" cases that stop recursion)
    // Call (High precedence)
    : expr '(' (expr (',' expr)*)? ')' # Call

    |'(' expr ')' # Parentheses
    // magnitude
    | '||' expr '||' # Magnitude

     // abs
    | '|' expr '|' # AbsoluteValue

    | expr ('[' expr ']')+ # IndexOperator
    
    // getter
    | expr '.' expr # Getter
    
    // Unary Operators
    // ~ is normalize
    | ('not' | 'bits_not' | '+' | '-' | 'norm' | 'inv' | 'trans' | 'det' | 'deg' | 'rad' ) expr # UnaryOperator
    

    // Binary Operators (Ordered by Precedence)
    // >< is cross product
    // ' is dot product
    // <-> is distance
    // -> is reflect
    // <- is also reflect
    | expr ('^') expr # BinaryOperator
    | expr ('*' | '/' | '%' | '\'' | '><' | '<->' ) expr # BinaryOperator
    | expr ('+' | '-') expr # BinaryOperator
    | expr ('bits_left' | 'bits_right') expr # BinaryOperator
    | expr ('bits_and' | 'bits_xor' | 'bits_or') expr # BinaryOperator
    | expr ('and' | 'or') expr # BinaryOperator
    | expr ('<' | '>' | '>=' | '<=' | '==') expr # BinaryOperator
    // cast
    | expr 'as' type # Cast
    | <assoc=right> expr '=' expr # BinaryOperator
    | <assoc=right> declaration '=' expr # BinaryOperator
    | expr ('^=' | '*=' | '/=' | '%=' | '\'=' | '><=' | '<->=' ) expr # BinaryOperator
    | declaration ('^=' | '*=' | '/=' | '%=' | '\'=' | '><=' | '<->=' ) expr # BinaryOperator
    | expr ('+=' | '-=') expr # BinaryOperator
    | declaration ('+=' | '-=') expr # BinaryOperator
    | expr ('bits_left=' | 'bits_right=') expr # BinaryOperator
    | declaration ('bits_left=' | 'bits_right=') expr # BinaryOperator
    | expr ('bits_and=' | 'bits_xor=' | 'bits_or=') expr # BinaryOperator
    | declaration ('bits_and=' | 'bits_xor=' | 'bits_or=') expr # BinaryOperator
    | expr ('and=' | 'or=') expr # BinaryOperator
    | declaration ('and=' | 'or=') expr # BinaryOperator
    | PRIMITIVE # Primitive
    ;

descriptor: 'def'
          | 'in'
          | 'out'
          | 'uniform'
          | 'vertex' '[' INT ']'
          | 'mut'
          ;

declaration: descriptor* LABEL (':' type)?;

type:( precision_qualifier )?
    ( 'none'
    | 'i8'
    | 'i16'
    | 'i32'
    | 'u8'
    | 'u16'
    | 'u32'
    | 'f8'
    | 'f16'
    | 'f32'
    | 'f64'
    | 'bool'
    | 'vec2'
    | 'vec3'
    | 'vec4'
    | 'v2'
    | 'v3'
    | 'v4'
    | 'm2'
    | 'm3'
    | 'm4'
    | 'm2x2'
    | 'm3x3'
    | 'm4x4'
    | 'm2x3'
    | 'm3x2'
    | 'm3x4'
    | 'm4x3'
    | 'm2x4'
    | 'm4x2'
    | 'mat2'
    | 'mat3'
    | 'mat4'
    | 'mat2x3'
    | 'mat2x4'
    | 'mat3x2'
    | 'mat3x4'
    | 'mat4x2'
    | 'mat4x3'
    ) ('[' INT ']')*
    ;


precision_qualifier: 'lp' | 'mp' | 'hp';

PRIMITIVE: INT | FLOAT | LABEL;

FLOAT: [0-9]+'.'[0-9]+;
LABEL: [a-zA-Z_] [a-zA-Z_0-9]*;
INT: [0-9]+;

NEWLINE: '\r'? '\n' | '\r';
WS: [ \t]+ -> skip;
BLOCK_COMMENT
    : '#*' ( . | '\r' | '\n' )*? '*#' -> skip
    ;
LINE_COMMENT : '#' ~[\r\n]* -> skip ;
ERROR_TOKEN: . ;