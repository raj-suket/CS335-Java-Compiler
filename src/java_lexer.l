%{
    #include<bits/stdc++.h>
    using namespace std;
    #include "test.tab.h"
    int lines=1;
%}

IntType               byte|short|int|long|char
FloatType             float|double
ID                    [_a-zA-Z][_a-zA-Z0-9]*
Bool_literal          true|false
Null_literal          null
num                   [0-9]|[1-9][_0-9]*[0-9]
hex                   [0-9a-fA-F]|[0-9a-fA-F][_0-9a-fA-F]*[0-9a-fA-F]
Hex_literal           ("0x"{hex})|("0X"{hex})
Octal_digit           [0-7]
Octal_literal         "0""_"*([0-7]|[0-7][_0-7]*[0-7])
Binary_literal        ("0b"([0-1]|[0-1][_0-1]*[0-1]))|("0b"([0-1]|[0-1][_0-1]*[0-1]))
expo                  [eE][+-]?{num}
Decimal_float         ({num}"."[0-9]*{expo}?[fFdD]?)|("."[0-9]+{expo}?[fDFd]?)|({num}{expo}[fFdD]?)|({num}{expo}?[fDFd])
binary_expo           [pP][+-]?{num}
hexsignificand        {Hex_literal}"."?|"0x"{hex}?"."{hex}|"0X"{hex}?"."{hex}
Hex_float             {hexsignificand}{binary_expo}[fFdD]?
Int_literal           {Hex_literal}[lL]?|{Octal_literal}[lL]?|{Binary_literal}[lL]?|{num}[lL]?
Float_literal         {Decimal_float}|{Hex_float}
Unicode_Escapes       \\u[0-9a-fA-F]{4}
Escapes               \\[bstnfr"'\\]
Octal_Escape          \\{Octal_digit}|\\{Zero_To_Three}?{Octal_digit}{Octal_digit}
Zero_To_Three         [0-3]   
Escape_Sequence       {Unicode_Escapes}|{Escapes}|{Octal_Escape}
Input_Character       [^\'\\]
White_Space           [\t\f ]
Line_Terminator       "\n"|"\r"|"\r\n"
Text_Block_Literal     "\"\"\""{White_Space}*{Line_Terminator}("\""[^\"\\]|("\"\""[^\\\"])|[^\\\"]|{Escape_Sequence}|{Line_Terminator})*"\"\"\""
Char_Literal           "\'"({Escape_Sequence}|{Input_Character})?"\'"
String_input_character [^\n\"]
String_Character       {String_input_character}|{Escape_Sequence}
String_Literal        "\""{String_Character}*"\""
printStatement         "System.out.println(".*");"

%x COMMENT1
%x COMMENT2

%option yylineno

%%

"//"                  {BEGIN(COMMENT1);}
<COMMENT1>"\n"        {lines++; 
                       BEGIN(INITIAL);}
<COMMENT1>"\r"        {lines++; 
                       BEGIN(INITIAL);}                       
<COMMENT1>"\r\n"      {lines++; 
                       BEGIN(INITIAL);}
<COMMENT1>.           {/*ignore*/}

"/*"                  {BEGIN(COMMENT2); }
<COMMENT2>"*/"        {BEGIN(INITIAL);}
<COMMENT2>"\n"        {lines++;}
<COMMENT2>"\r"        {lines++;}
<COMMENT2>"\r\n"      {lines++;}
<COMMENT2>.           {/*ignore*/}           

{printStatement}      {}
{Bool_literal}        {yylval.lex = new string(yytext); return BOOL_LITERAL;}
{Null_literal}        {yylval.lex = new string(yytext); return NULL_LITERAL;}
{Int_literal}         {yylval.lex = new string(yytext); return INT_LITERAL;}
{Float_literal}       {yylval.lex = new string(yytext); return FLOAT_LITERAL;}
{Text_Block_Literal}  {yylval.lex = new string(yytext); return TEXTBLOCK_LITERAL;}
{String_Literal}      {yylval.lex = new string(yytext); return STRING_LITERAL;}
{Char_Literal}        {yylval.lex = new string(yytext); return CHAR_LITERAL;}
{FloatType}           {yylval.lex = new string(yytext); return FLOATINGPOINTTYPE;}
{IntType}             {yylval.lex = new string(yytext); return INTEGRALTYPE;}
"this"                {yylval.lex = new string(yytext); return THIS;}
"class"               {yylval.lex = new string(yytext); return CLASS;}
"void"                {yylval.lex = new string(yytext); return VOID;}
"boolean"             {yylval.lex = new string(yytext); return BOOLEAN;}
"new"                 {yylval.lex = new string(yytext); return NEW;}
"super"               {yylval.lex = new string(yytext); return SUPER;}
"switch"              {yylval.lex = new string(yytext); return SWITCH;}
"package"             {yylval.lex = new string(yytext); return PACKAGE;}
"module"              {yylval.lex = new string(yytext); return MODULE;}
"requires"            {yylval.lex = new string(yytext); return REQUIRES;}
"exports"             {yylval.lex = new string(yytext); return EXPORTS;}
"opens"               {yylval.lex = new string(yytext); return OPENS;}
"to"                  {yylval.lex = new string(yytext); return TO;}
"uses"                {yylval.lex = new string(yytext); return USES;}
"provides"            {yylval.lex = new string(yytext); return PROVIDES;}
"with"                {yylval.lex = new string(yytext); return WITH;}
"transitive"          {yylval.lex = new string(yytext); return TRANSITIVE; }
"static"              {yylval.lex = new string(yytext); return STATIC;}
"public"              {yylval.lex = new string(yytext); return PUBLIC;}
"protected"           {yylval.lex = new string(yytext); return PROTECTED;}
"private"             {yylval.lex = new string(yytext); return PRIVATE;}
"abstract"            {yylval.lex = new string(yytext); return ABSTRACT;}
"final"               {yylval.lex = new string(yytext); return FINAL;}
"native"              {yylval.lex = new string(yytext); return NATIVE;}
"synchronized"        {yylval.lex = new string(yytext); return SYNCHRONIZED; }
"transient"           {yylval.lex = new string(yytext); return TRANSIENT;}
"volatile"            {yylval.lex = new string(yytext); return VOLATILE;}
"extends"             {yylval.lex = new string(yytext); return EXTENDS;}
"throws"              {yylval.lex = new string(yytext); return THROWS;}
"var"                 {yylval.lex = new string(yytext); return VAR;}
"assert"              {yylval.lex = new string(yytext); return ASSERT;}
"if"                  {yylval.lex = new string(yytext); return IF;}
"else"                {yylval.lex = new string(yytext); return ELSE;}
"case"                {yylval.lex = new string(yytext); return CASE;}
"default"             {yylval.lex = new string(yytext); return DEFAULT;}
"while"               {yylval.lex = new string(yytext); return WHILE;}
"do"                  {yylval.lex = new string(yytext); return DO;}
"for"                 {yylval.lex = new string(yytext); return FOR;}
"break"               {yylval.lex = new string(yytext); return BREAK;}
"continue"            {yylval.lex = new string(yytext); return CONTINUE;}
"return"              {yylval.lex = new string(yytext); return RETURN;}
"throw"               {yylval.lex = new string(yytext); return THROW;}
"try"                 {yylval.lex = new string(yytext); return TRY;}
"catch"               {yylval.lex = new string(yytext); return CATCH;}
"finally"             {yylval.lex = new string(yytext); return FINALLY;}
"instanceof"          {yylval.lex = new string(yytext); return INSTANCEOF;}
"="                   {yylval.lex = new string(yytext); return EQUALTO;}
"+="                  {yylval.lex = new string(yytext); return PLUSET;}
"-="                  {yylval.lex = new string(yytext); return MINUSET;}
"*="                  {yylval.lex = new string(yytext); return MULTET;}
"/="                  {yylval.lex = new string(yytext); return DIVET;}
"&="                  {yylval.lex = new string(yytext); return ANDET;}
"<"                   {yylval.lex = new string(yytext); return LT;}
">"                   {yylval.lex = new string(yytext); return GT;}
"<="                  {yylval.lex = new string(yytext); return LEQ;}
">="                  {yylval.lex = new string(yytext); return GEQ;}
"<<"                  {yylval.lex = new string(yytext); return LEFTSHIFT;}  
">>"                  {yylval.lex = new string(yytext); return RIGHTSHIFT;}
">>>"                 {yylval.lex = new string(yytext); return THREEGREAT;}
"+"                   {yylval.lex = new string(yytext); return PLUS;}   
"-"                   {yylval.lex = new string(yytext); return MINUS;}
"*"                   {yylval.lex = new string(yytext); return MULT;}
"/"                   {yylval.lex = new string(yytext); return DIVIDE;}
"%"                   {yylval.lex = new string(yytext); return MODULO;}
"++"                  {yylval.lex = new string(yytext); return INCREMENT;}
"--"                  {yylval.lex = new string(yytext); return DECREMENT;}
"~"                   {yylval.lex = new string(yytext); return TILDE;}
"!"                   {yylval.lex = new string(yytext); return NOT;}
"?"                   {yylval.lex = new string(yytext); return QUEST;}
":"                   {yylval.lex = new string(yytext); return COLON;}
"||"                  {yylval.lex = new string(yytext); return OR;}
"&&"                  {yylval.lex = new string(yytext); return AND;}
"|"                   {yylval.lex = new string(yytext); return BITOR;}
"&"                   {yylval.lex = new string(yytext); return BITAND;}
"^"                   {yylval.lex = new string(yytext); return POW;}
"=="                  {yylval.lex = new string(yytext); return EQ;}
"!="                  {yylval.lex = new string(yytext); return NEQ;}
"."                   {yylval.lex = new string(yytext); return DOT;}
"{"                   {yylval.lex = new string(yytext); return LCB;}
"}"                   {yylval.lex = new string(yytext); return RCB;}
"["                   {yylval.lex = new string(yytext); return LSB;}
"]"                   {yylval.lex = new string(yytext); return RSB;}
"("                   {yylval.lex = new string(yytext); return LRB;}
")"                   {yylval.lex = new string(yytext); return RRB;}
","                   {yylval.lex = new string(yytext); return COMMA;}
";"                   {yylval.lex = new string(yytext); return SEMICOLON;}
{ID}                  {yylval.lex = new string(yytext); return IDENTIFIER;}
[ \t\f]               {/*ignore whitespace*/}
"\n"|"\r"|"\r\n"      {/*ignore line terminator*/}
.                     {cerr<<"Illegal character encountered: Lexical Error "<<strdup(yytext)<<endl; exit(1);}
%%