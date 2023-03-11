
%{
#include <bits/stdc++.h>
using namespace std;
int lines = 0;
vector <pair<string, string> > texts;
%}


LINE_TERM       [\r\n]|"\r\n"
HEX             [0-9a-fA-F]
DEC             [0-9]
UNICODE         "\\u"{HEX}{HEX}{HEX}{HEX}
SPACE           " "|"\t"|"\f"
DIGITS          [0-9]|([0-9]([0-9_]+)?[0-9])
HEXDIGITS       [0-9a-fA-F]|([0-9a-fA-F]([0-9a-fA-F_]+)?[0-9a-fA-F])
TEXTS           ([^\\\"]|{LINE_TERM})*
TypeIdentifier  [a-zA-Z_][a-zA-Z0-9_]*
%option yylineno

%%

int|long|char|short|byte            {return IntegralType;}
float|double                        {return FloatingPointType;}

permit|yield|record|sealed|var|{TypeIdentifier}                             {return Identifier;}

abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this                {texts.push_back(make_pair(yytext, "Keyword"));}
break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return                  {texts.push_back(make_pair(yytext, "Keyword"));}
transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp                  {texts.push_back(make_pair(yytext, "Keyword"));}
volatile|const|float|native|super|while|"_"                                                                         {texts.push_back(make_pair(yytext, "Keyword"));}
exports|opens|requires|uses|module|permits|sealed|var|"non-sealed"|provides|to|with|open|record|transitive|yield    {texts.push_back(make_pair(yytext, "Keyword"));}
true|false                                                                                                          {texts.push_back(make_pair(yytext, "Literal"));}
null                                                                                                                {texts.push_back(make_pair(yytext, "Literal"));}

{SPACE}|{LINE_TERM}         {}

("/*")[^\*]*("*")*[^\*/]*("*")*("*/")                                {}
("//")[ -~]*{LINE_TERM}?                                             {}

","|";"|"  "|"{"|"}"|"["|"]"|"("|")"|"."|"..."|"@"                                                      {texts.push_back(make_pair(yytext, "Separator"));}
"="|">"|"<"|"!"|"~"|"?"|" "|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"    {texts.push_back(make_pair(yytext, "Operator"));}
"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>="                          {texts.push_back(make_pair(yytext, "Operator"));}

(0|[1-9](({DIGITS})*)?|[1-9]("_")*({DIGITS})*)(l?|L?)               {texts.push_back(make_pair(yytext, "Literal"));}
(0x|0X){HEXDIGITS}(l?|L?)                                           {texts.push_back(make_pair(yytext, "Literal"));}
0([_]*)?([0-7]|[0-7]([0-7_]+)?[0-7])(l?|L?)                         {texts.push_back(make_pair(yytext, "Literal"));}
(0b|0B)([0-1]|[0-1]([0-1_]+)?[0-1])(l?|L?)                          {texts.push_back(make_pair(yytext, "Literal"));}

{DIGITS}"."({DIGITS})?((e|E)("+"|"-")?{DIGITS})?(f|F|d|D)?                           {texts.push_back(make_pair(yytext, "Literal"));}
"."{DIGITS}((e|E)("+"|"-")?{DIGITS})?(f|F|d|D)?                                      {texts.push_back(make_pair(yytext, "Literal"));}
{DIGITS}((e|E)("+"|"-")?{DIGITS})(f|F|d|D)?                                          {texts.push_back(make_pair(yytext, "Literal"));}
{DIGITS}((e|E)("+"|"-")?{DIGITS})?(f|F|d|D)                                          {texts.push_back(make_pair(yytext, "Literal"));}

(0x|0X){HEXDIGITS}(".")?(p|P)("+"|"-")?{DIGITS}(f|F|d|D)?                                            {texts.push_back(make_pair(yytext, "Literal"));}
(0x|0X)({HEXDIGITS})?("."){HEXDIGITS}(p|P)("+"|"-")?{DIGITS}(f|F|d|D)?                               {texts.push_back(make_pair(yytext, "Literal"));}

"'"{UNICODE}"'"|"'"[^\'\\]"'"                                                                       {texts.push_back(make_pair(yytext, "Literal"));}
\"\"\"(" "|"\t"|"\f")*{LINE_TERM}({TEXTS}|{TEXTS}\"\"{TEXTS}|{TEXTS}\"{TEXTS})\"\"\"                {texts.push_back(make_pair(yytext, "Literal"));}
\"([^\"\\])*\"                                                                                      {texts.push_back(make_pair(yytext, "String Literal"));}

[a-zA-Z_][a-zA-Z0-9_]*                                                                              {texts.push_back(make_pair(yytext, "Identifier"));}
.                                                                                                   {cerr << "Error at line  " << yylineno << endl;}
%%

int main(int argc, char** argv){
    
    if(argc > 1){
        yyin = fopen(argv[1], "r");
    }else{
        yyin = stdin;
    }
    
    yylex();


    freopen("Output_2.csv", "w", stdout);

    map <string, int> frequency;

    vector <pair<string, string> > answer;
    for(auto i texts){
        if(frequency[i.first] == 0) answer.push_back(i);
        frequency[i.first]++;
    }
    cout << "Lexeme , Token , Count\n"; 
    for(auto i answer){
        cout << i.first << " , " << i.second << " , " << frequency[i.first] << "\n";
    }

    exit(0);
}
