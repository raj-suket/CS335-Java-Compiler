%{
#include <bits/stdc++.h>
using namespace std;

extern int yylex();
extern int yyparse();
extern FILE* yyin;
int yyerror(char *s);

int num_words = 0, num_para = 0, num_sentence = 0, num_chapter = 0, num_section = 0;
int decl = 0, excl = 0, intr = 0;
string titleLine;
vector<string> chapterLines;
vector<string> sectionLines; 
vector<vector<string > > sections;
string customPrint(string s);
%}

%token<str> ChapterToken
%token<str> SectionToken
%token<str> TitleToken
%token<str> SENTENCE_SEP
%token<str> ALPHABETS
%token<str> NUM
%token<str> FLOAT
%token NEWLINE
%token WORD_SEP
%token SPACE
%token COLON

%type<str> Title
%type<str> Chapter
%type<str> Section
%type<str> Paragraph
%type<str> Sentence
%type<str> TitleLine
%type<str> ChapterLine
%type<str> SectionLine
%union{
    char *str;
}

%%

Type  IntegralType | FloatingPointType | boolean

ModuleName  Identifier | ModuleName '.' Identifier

ClassDeclaration  NormalClassDeclaration

ClassDeclaration 
NormalClassDeclaration
EnumDeclaration
RecordDeclaration
NormalClassDeclaration 
{ClassModifier} class TypeIdentifier [TypeParameters] [ClassExtends] [ClassImplements] [ClassPermits] ClassBody
ClassModifier 
(one of)
Annotation public protected private
abstract static final sealed non-sealed strictfp
TypeParameters 
< TypeParameterList >
TypeParameterList 
TypeParameter {, TypeParameter}
ClassExtends 
extends ClassType
ClassImplements 
implements InterfaceTypeList
InterfaceTypeList 
InterfaceType {, InterfaceType}
ClassPermits 
permits TypeName {, TypeName}
ClassBody 
{ {ClassBodyDeclaration} }
ClassBodyDeclaration 
ClassMemberDeclaration
InstanceInitializer
StaticInitializer
ConstructorDeclaration
ClassMemberDeclaration 
FieldDeclaration
MethodDeclaration
ClassDeclaration
InterfaceDeclaration
;
FieldDeclaration 
{FieldModifier} UnannType VariableDeclaratorList ;
FieldModifier 
(one of)
Annotation public protected private
static final transient volatile
VariableDeclaratorList 
VariableDeclarator {, VariableDeclarator}
VariableDeclarator 
VariableDeclaratorId [= VariableInitializer]
VariableDeclaratorId 
Identifier [Dims]
VariableInitializer 
Expression
ArrayInitializer
UnannType 
UnannPrimitiveType
UnannReferenceType
UnannPrimitiveType 
NumericType
boolean
UnannReferenceType 
UnannClassOrInterfaceType
UnannTypeVariable
UnannArrayType
UnannClassOrInterfaceType 
UnannClassType
UnannInterfaceType
UnannClassType 
TypeIdentifier [TypeArguments]
PackageName . {Annotation} TypeIdentifier [TypeArguments]
UnannClassOrInterfaceType . {Annotation} TypeIdentifier [TypeArguments]
UnannInterfaceType 
UnannClassType
UnannTypeVariable 
TypeIdentifier
UnannArrayType 
UnannPrimitiveType Dims
UnannClassOrInterfaceType Dims
UnannTypeVariable Dims
MethodDeclaration 
{MethodModifier} MethodHeader MethodBody
MethodModifier 
(one of)
Annotation public protected private
abstract static final synchronized native strictfp
MethodHeader 
Result MethodDeclarator [Throws]
TypeParameters {Annotation} Result MethodDeclarator [Throws]
Result 
UnannType
void
MethodDeclarator 
Identifier ( [ReceiverParameter ,] [FormalParameterList] ) [Dims]
ReceiverParameter 
{Annotation} UnannType [Identifier .] this
FormalParameterList 
FormalParameter {, FormalParameter}
FormalParameter 
{VariableModifier} UnannType VariableDeclaratorId
VariableArityParameter
VariableArityParameter 
{VariableModifier} UnannType {Annotation} ... Identifier
VariableModifier 
Annotation
final
Throws 
throws ExceptionTypeList
ExceptionTypeList 
ExceptionType {, ExceptionType}
ExceptionType 
ClassType
TypeVariable
MethodBody 
Block
;
InstanceInitializer 
Block
StaticInitializer 
static Block
ConstructorDeclaration 
{ConstructorModifier} ConstructorDeclarator [Throws] ConstructorBody
ConstructorModifier 
(one of)
Annotation public protected private
ConstructorDeclarator 
[TypeParameters] SimpleTypeName ( [ReceiverParameter ,] [FormalParameterList] )
SimpleTypeName 
TypeIdentifier
ConstructorBody 
{ [ExplicitConstructorInvocation] [BlockStatements] }
ExplicitConstructorInvocation 
[TypeArguments] this ( [ArgumentList] ) ;
[TypeArguments] super ( [ArgumentList] ) ;
ExpressionName . [TypeArguments] super ( [ArgumentList] ) ;
Primary . [TypeArguments] super ( [ArgumentList] ) ;
EnumDeclaration 
{ClassModifier} enum TypeIdentifier [ClassImplements] EnumBody
EnumBody 
{ [EnumConstantList] [,] [EnumBodyDeclarations] }
EnumConstantList 
EnumConstant {, EnumConstant}
EnumConstant 
{EnumConstantModifier} Identifier [( [ArgumentList] )] [ClassBody]
EnumConstantModifier 
Annotation
EnumBodyDeclarations 
; {ClassBodyDeclaration}
RecordDeclaration 
{ClassModifier} record TypeIdentifier [TypeParameters] RecordHeader [ClassImplements] RecordBody
RecordHeader 
( [RecordComponentList] )
RecordComponentList 
RecordComponent {, RecordComponent}
RecordComponent 
{RecordComponentModifier} UnannType Identifier
VariableArityRecordComponent
VariableArityRecordComponent 
{RecordComponentModifier} UnannType {Annotation} ... Identifier
RecordComponentModifier 
Annotation
RecordBody 
{ {RecordBodyDeclaration} }
RecordBodyDeclaration 
ClassBodyDeclaration
CompactConstructorDeclaration
CompactConstructorDeclaration 
{ConstructorModifier} SimpleTypeName ConstructorBody

%%

int main(){
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    yyparse();

    printf("Number of Chapters  %d\n", num_chapter);
    printf("Number of Sections  %d\n", num_section);
    printf("Number of Paragraphs  %d\n", num_para);
    printf("Number of Sentences  %d\n", num_sentence);
    printf("Number of Words  %d\n", num_words);

    printf("Number of Declarative Sentences  %d\n", decl);
    printf("Number of Exclamatory Sentences  %d\n", excl);
    printf("Number of Interrogative Sentences  %d\n", intr);

    cout << endl << endl;
    cout << titleLine << endl;
    cout << "Table of Contents " << endl;
    // cout << chapterLines[0]<< endl;
    //  customPrint(sections[0][0]);
    for(int i = 0; i < chapterLines.size(); i++){
        cout << customPrint(chapterLines[i]) << endl;
        for(int j = 0; j < sections[i].size(); j++){
            cout << "\t" << customPrint(sections[i][j]) << endl;
        }
    }
    return 0;
}

int yyerror(char *s){
    cerr << "Error reported!\n";
    return 0;
}

string customPrint(string s){
    string s1 = "";
    for(auto i s){
        if(i == '\n') break;
        else s1.push_back(i);
    }
    return s1;
}