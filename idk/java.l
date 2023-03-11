%{
    #include<bits/stdc++.h>
    using namespace std;
    #include "try2.tab.h"
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
Octal_literal         "0""_"*([0-7]|[0-7][_0-7]*[0-7])
Binary_literal        ("0b"([0-1]|[0-1][_0-1]*[0-1]))|("0b"([0-1]|[0-1][_0-1]*[0-1]))
expo                  [eE][+-]?{num}
Decimal_float         ({num}"."[0-9]*{expo}?[fFdD]?)|("."[0-9]+{expo}?[fDFd]?)|({num}{expo}[fFdD]?)|({num}{expo}?[fDFd])
binary_expo           [pP][+-]?{num}
hexsignificand        {Hex_literal}"."?|"0x"{hex}?"."{hex}|"0X"{hex}?"."{hex}
Hex_float             {hexsignificand}{binary_expo}[fFdD]?
Character_literal     '[^'\\\n\r]'       
basic_literal         {Bool_literal}|{Null_literal}|{Hex_literal}[lL]?|{Octal_literal}[lL]?|{Binary_literal}[lL]?|{num}[lL]?|{Decimal_float}|{Hex_float}|{Character_literal}       
String_literal        \"[^"\\]*\"
Final_literal         {basic_literal}
Text_block            \"\"\"[^"](["][^"]|["]["][^"]|[^"])*\"\"\"


%x COMMENT1
%x COMMENT2

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

"\n"|"\r"|"\r\n"      {lines++;}

{FloatType}           {  return FLOATINGPOINTTYPE;}
{IntType}             {  return INTEGRALTYPE;}
"this"                {  return THIS;}
"class"               {  return CLASS;}
"void"                {  return VOID;}
"boolean"             {  return BOOLEAN;}
"new"                 {  return NEW;}
"super"               {  return SUPER;}
"instanceof"          {  return INSTANCEOF;}
"switch"              {  return SWITCH;}
"package"             {  return PACKAGE;}
"module"              {  return MODULE;}
"requires"            {  return REQUIRES;}
"exports"             {  return EXPORTS;}
"opens"               {  return OPENS;}
"to"                  {  return TO;}
"uses"                {  return USES;}
"provides"            {  return PROVIDES;}
"with"                {  return WITH;}
"transitive"          {  return TRANSITIVE; }
"static"              {  return STATIC;}
"public"              {  return PUBLIC;}
"protected"           {  return PROTECTED;}
"private"             {  return PRIVATE;}
"abstract"            {  return ABSTRACT;}
"final"               {  return FINAL;}
"native"              {  return NATIVE;}
"synchronized"        {  return SYNCHRONIZED; }
"transient"           {  return TRANSIENT;}
"volatile"            {  return VOLATILE;}
"extends"             {  return EXTENDS;}
"throws"              {  return THROWS;}
"var"                 {  return VAR;}
"assert"              {  return ASSERT;}
"if"                  {  return IF;}
"else"                {  return ELSE;}
"case"                {  return CASE;}
"default"             {  return DEFAULT;}
"while"               {  return WHILE;}
"do"                  {  return DO;}
"for"                 {  return FOR;}
"break"               {  return BREAK;}
"continue"            {  return CONTINUE;}
"return"              {  return RETURN;}
"throw"               {  return THROW;}
"try"                 {  return TRY;}
"catch"               {  return CATCH;}
"finally"             {  return FINALLY;}
"="                   {  return EQUALTO;}
"+="                  {  return PLUSET;}
"-="                  {  return MINUSET;}
"*="                  {  return MULTET;}
"/="                  {  return DIVET;}
"&="                  {  return ANDET;}
"<"                   {  return LT;}
">"                   {  return GT;}
"<="                  {  return LEQ;}
">="                  {  return GEQ;}
"<<"                  {  return LEFTSHIFT;}  
">>"                  {  return RIGHTSHIFT;}
">>>"                 {  return THREEGREAT;}
"+"                   {  return PLUS;}   
"-"                   {  return MINUS;}
"*"                   {  return MULT;}
"/"                   {  return DIVIDE;}
"%"                   {  return MODULO;}
"++"                  {  return INCREMENT;}
"--"                  {  return DECREMENT;}
"~"                   {  return TILDE;}
"!"                   {  return NOT;}
"?"                   {  return QUEST;}
":"                   {  return COLON;}
"||"                  {  return OR;}
"&&"                  {  return AND;}
"|"                   {  return BITOR;}
"&"                   {  return BITAND;}
"^"                   {  return POW;}
"=="                  {  return EQ;}
"!="                  {  return NEQ;}
"."                   {  return DOT;}
"{"                   {  return LCB;}
"}"                   {  return RCB;}
"["                   {  return LSB;}
"]"                   {  return RSB;}
"("                   {  return LRB;}
")"                   {  return RRB;}
","                   {  return COMMA;}
";"                   {  return SEMICOLON;}
{ID}                  {  return IDENTIFIER;}
{String_literal}      {  return LITERAL;}
{Text_block}          {  return LITERAL;}
{Final_literal}       {  return LITERAL;}
[ \t\f]               {/*ignore whitespace*/}
.                     {cout<<"Illegal character"<<endl;}

%%