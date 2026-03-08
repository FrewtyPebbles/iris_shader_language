grammar iris_grammar;

options { language=Cpp; }

// === Keywords used in control flow / structure ===

FUNC          : 'func' ;
IF            : 'if' ;
ELIF          : 'elif' ;
ELSE          : 'else' ;
THEN          : 'then' ;

// === Import / module related ===
IMPORT        : 'import' ;
FROM          : 'from' ;

// === Declaration qualifiers / descriptors ===
DEF           : 'def' ;
IN            : 'in' ;
OUT           : 'out' ;
UNIFORM       : 'uniform' ;
MUT           : 'mut' ;
VERTEX        : 'vertex' ;

// === Expression operators / unary prefixes ===
NOT           : 'not' ;
BITS_NOT      : 'bits_not' ;
NORM          : 'norm:' ;
INV           : 'inv:' ;
TRANS         : 'trans:' ;
DET           : 'det:' ;
DEG           : 'deg:' ;
RAD           : 'rad:' ;

// === Binary logical / bitwise keywords ===
AND           : 'and' ;
OR            : 'or' ;
BITS_AND      : 'bits_and' ;
BITS_XOR      : 'bits_xor' ;
BITS_OR       : 'bits_or' ;
BITS_LEFT     : 'bits_left' ;
BITS_RIGHT    : 'bits_right' ;
AND_EQ           : 'and=' ;
OR_EQ            : 'or=' ;
BITS_AND_EQ      : 'bits_and=' ;
BITS_XOR_EQ      : 'bits_xor=' ;
BITS_OR_EQ       : 'bits_or=' ;
BITS_LEFT_EQ     : 'bits_left=' ;
BITS_RIGHT_EQ    : 'bits_right=' ;

AS       : 'as' ;

// === Type names (these are currently string literals in the type rule) ===
NONE          : 'none' ;
I8            : 'i8' ;
I16           : 'i16' ;
I32           : 'i32' ;
U8            : 'u8' ;
U16           : 'u16' ;
U32           : 'u32' ;
F8            : 'f8' ;
F16           : 'f16' ;
F32           : 'f32' ;
F64           : 'f64' ;
BOOL          : 'bool' ;
VEC2          : 'vec2' ;
VEC3          : 'vec3' ;
VEC4          : 'vec4' ;
V2            : 'v2' ;
V3            : 'v3' ;
V4            : 'v4' ;
M2            : 'm2' ;
M3            : 'm3' ;
M4            : 'm4' ;
M2X2          : 'm2x2' ;
M3X3          : 'm3x3' ;
M4X4          : 'm4x4' ;
M2X3          : 'm2x3' ;
M3X2          : 'm3x2' ;
M3X4          : 'm3x4' ;
M4X3          : 'm4x3' ;
M2X4          : 'm2x4' ;
M4X2          : 'm4x2' ;
MAT2          : 'mat2' ;
MAT3          : 'mat3' ;
MAT4          : 'mat4' ;
MAT2X3        : 'mat2x3' ;
MAT2X4        : 'mat2x4' ;
MAT3X2        : 'mat3x2' ;
MAT3X4        : 'mat3x4' ;
MAT4X2        : 'mat4x2' ;
MAT4X3        : 'mat4x3' ;

// === Precision qualifiers ===
LP            : 'lp' ;
MP            : 'mp' ;
HP            : 'hp' ;

root: (function_definition eos? | statement eos? )* EOF;

// statement
statement
    : import_statement
    | declaration
    | expr
    ;

return_statement: 'return' expr?;

import_statement
    : FROM (file_path_part ('.' file_path_part)*) IMPORT ((import_label (',' import_label)*) | '*')
    | IMPORT (file_path_part ('.' file_path_part)*) (AS (module_alias=LABEL))?
    ;

// missing type implies none for functions
function_definition: FUNC LABEL '(' (declaration (',' declaration)*)? ','? ')' ('->' type)? NEWLINE* block;

// if statement
conditional_block: IF expr (block | statement) (ELIF expr (block | statement))* ( ELSE (block | statement))?;

// for block
for_block: 'for' unpacking_list 'in' expr | 'for' iterator=declaration ',' expr ',' expr block;

unpacking_list
    : unpacking_item (',' unpacking_item)*
    ;

// The individual item or a nested list in parens
unpacking_item
    : LABEL
    | declaration
    | '(' unpacking_list ')'
    ;
// while block
while_block: 'while' expr block;

// do while
do_while_block: 'do' block 'while' expr;

// match case - works like rust match case as either its own statement or as an expression
match_block: 'match' expr '{' (case_block NEWLINE?)* '}';

// case
case_block: (expr | 'other') '->' block|expr;

file_path_part: LABEL | '.';

import_label: import_name=LABEL (AS import_alias=LABEL)?;

// block
block: '{' (block_item)* '}';

block_item
    : ((statement) NEWLINE?) # BlockStatement
    | while_block # BlockWhileBlock
    | for_block # BlockForBlock
    | conditional_block # BlockConditionalBlock
    ;

// ternary
conditional: IF expr THEN expr ELSE expr;


expr
    // ---------------------------------------------------------
    // LEVEL 1: Primaries & Grouping (Highest Precedence)
    // ---------------------------------------------------------
    : return_statement                  # Return
    | '(' expr ')'                      # Parentheses
    | primitive                         # PrimitiveExpression
    | '||' expr '||'                    # Magnitude
    | '|' expr '|'                      # AbsoluteValue

    // ---------------------------------------------------------
    // LEVEL 2: Member Access & Calls (Postfix)
    // ---------------------------------------------------------
    | expr '(' (expr (',' expr)*)? ')'  # Call
    | type '(' (expr (',' expr)*)? ')'  # ConstructorCall
    | expr '[' expr ']'                 # IndexOperator
    | expr '.' primitive                    # Getter

    // ---------------------------------------------------------
    // LEVEL 3: Unary Operators & Casts
    // ---------------------------------------------------------
    // Unary binds tighter than multiplication
    | op=(NOT | BITS_NOT | '+' | '-' | NORM | INV | TRANS | DET | DEG | RAD ) expr # UnaryOperator

    // ---------------------------------------------------------
    // LEVEL 4: Exponentiation
    // ---------------------------------------------------------
    | <assoc=right> expr op='^' expr    # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 5: Multiplicative
    // ---------------------------------------------------------
    // Includes dot product (@), cross product (><)
    | expr op=('*' | '/' | '%' | '@' | '><' ) expr # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 6: Additive
    // ---------------------------------------------------------
    | expr op=('+' | '-') expr          # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 7: Bitwise Shifts
    // ---------------------------------------------------------
    | expr op=(BITS_LEFT | BITS_RIGHT) expr # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 8: Relational (Comparison)
    // ---------------------------------------------------------
    | expr op=('<' | '>' | '>=' | '<=') expr # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 9: Equality
    // ---------------------------------------------------------
    // Must be lower than Relational (e.g., x < 5 == true)
    | expr op=('==' | '!=') expr        # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 10: Bitwise Logic (Sorted by Precedence)
    // ---------------------------------------------------------
    | expr op=BITS_AND expr             # BinaryOperator
    | expr op=BITS_XOR expr             # BinaryOperator
    | expr op=BITS_OR expr              # BinaryOperator

    // ---------------------------------------------------------
    // LEVEL 11: Logical Boolean
    // ---------------------------------------------------------
    | expr op=AND expr                  # BinaryOperator
    | expr op=OR expr                   # BinaryOperator
    | expr AS type                      # Cast

    // ---------------------------------------------------------
    // LEVEL 12: Ternary
    // ---------------------------------------------------------
    | conditional                       # Ternary

    // ---------------------------------------------------------
    // Match assignment
    // ---------------------------------------------------------
    | match_block # Match

    // ---------------------------------------------------------
    // LEVEL 13: Assignment (Lowest Precedence)
    // ---------------------------------------------------------
    // All assignments are grouped here to ensure they bind last.
    // Right-associative: a = b = c  ->  a = (b = c)
    | <assoc=right> expr op=(
        '=' | '+=' | '-=' | '*=' | '/=' | '%=' | '^=' |
        '\'=' | '><=' | '<->=' | 
        BITS_LEFT_EQ | BITS_RIGHT_EQ | 
        BITS_AND_EQ | BITS_XOR_EQ | BITS_OR_EQ | 
        AND_EQ | OR_EQ
      ) expr                            # BinaryOperator
    ;

descriptor:
          (descriptor_name=(
            DEF
          | IN
          | OUT
          | UNIFORM
          | MUT ))
          | (descriptor_name=VERTEX) '[' INT ']'
          ;

precision_qualifier: LP | MP | HP;

type:( precision_qualifier )?
    (type_name=(
      NONE
    | I8
    | I16
    | I32
    | U8
    | U16
    | U32
    | F8
    | F16
    | F32
    | F64
    | BOOL
    | VEC2
    | VEC3
    | VEC4
    | V2
    | V3
    | V4
    | M2
    | M3
    | M4
    | M2X2
    | M3X3
    | M4X4
    | M2X3
    | M3X2
    | M3X4
    | M4X3
    | M2X4
    | M4X2
    | MAT2
    | MAT3
    | MAT4
    | MAT2X3
    | MAT2X4
    | MAT3X2
    | MAT3X4
    | MAT4X2
    | MAT4X3)
    ) ('[' INT ']')*
    ;

declaration
    : descriptor LABEL ('=' expr)?
    | descriptor LABEL ':' type ('=' expr)?
    | LABEL ':' type ('=' expr)?
    ;

// Helper for "end of line"
eos: ';' ;//(NEWLINE | ';' | EOF);

primitive: INT | FLOAT | LABEL;

FLOAT: [0-9]+'.'[0-9]+;
LABEL: [a-zA-Z_][a-zA-Z_0-9]*;
INT: [0-9]+;

WS: [ \t\n\r]+ -> skip;
NEWLINE: '\r'? '\n' | '\r';

LINE_COMMENT
    : '#' ~[\r\n]* -> skip;
BLOCK_COMMENT
    : '#*' (~[\r\n] | [\n\r])* '*#' -> skip
    ;
ERROR_TOKEN: . ;