%{
#include<bits/stdc++.h>
using namespace std;
int yyerror(const char* s)
{
    printf("ERROR\n");
    return 0;
}
extern int yylineno;
int yylex(void);

struct Node{
    string val;
    vector<Node*> children;
};

Node* createnode (string  val, vector<Node*>  children){
    Node * temp = new Node;
    temp->val = val;
    for(int i=0;i<children.size();i++){
        temp->children.push_back(children[i]);
    }
    return temp;
}

Node* root;

vector<Node *> emp;
vector<Node *> vec;
%}


%union{
    struct Node* str_val;
    std::string* lex;
}

%start CompilationUnit

%token<lex> ABSTRACT
%token<lex> AND
%token<lex> ANDET
%token<lex> ASSERT
%token<lex> BITAND
%token<lex> BITOR
%token<lex> BOOLEAN
%token<lex> BREAK
%token<lex> CASE
%token<lex> CATCH
%token<lex> CLASS
%token<lex> COLON
%token<lex> COMMA
%token<lex> CONTINUE
%token<lex> DECREMENT
%token<lex> DEFAULT
%token<lex> DIVET
%token<lex> DIVIDE
%token<lex> DO
%token<lex> DOT
%token<lex> ELSE
%token<lex> EQ
%token<lex> EQUALTO
%token<lex> EXPORTS
%token<lex> EXTENDS
%token<lex> FINAL
%token<lex> FINALLY
%token<lex> FLOATINGPOINTTYPE
%token<lex> FOR
%token<lex> GEQ
%token<lex> GT
%token<lex> IDENTIFIER
%token<lex> IF
%token<lex> INCREMENT
%token<lex> INSTANCEOF
%token<lex> INTEGRALTYPE
%token<lex> LCB
%token<lex> LEFTSHIFT
%token<lex> LEQ
%token<lex> LITERAL
%token<lex> LRB
%token<lex> LSB
%token<lex> LT
%token<lex> MINUS
%token<lex> MINUSET
%token<lex> MODULE
%token<lex> MODULO
%token<lex> MULT
%token<lex> MULTET
%token<lex> NATIVE
%token<lex> NEQ
%token<lex> NEW
%token<lex> NOT
%token<lex> OPENS
%token<lex> OR
%token<lex> PACKAGE
%token<lex> PLUS
%token<lex> PLUSET
%token<lex> POW
%token<lex> PRIVATE
%token<lex> PROTECTED
%token<lex> PROVIDES
%token<lex> PUBLIC
%token<lex> QUEST
%token<lex> RCB
%token<lex> REQUIRES
%token<lex> RETURN
%token<lex> RIGHTSHIFT
%token<lex> RRB
%token<lex> RSB
%token<lex> SEMICOLON
%token<lex> STATIC
%token<lex> SUPER
%token<lex> SWITCH
%token<lex> SYNCHRONIZED
%token<lex> THIS
%token<lex> THREEGREAT
%token<lex> THROW
%token<lex> THROWS
%token<lex> TILDE
%token<lex> TO
%token<lex> TRANSIENT
%token<lex> TRANSITIVE
%token<lex> TRY
%token<lex> USES
%token<lex> VAR
%token<lex> VOID
%token<lex> VOLATILE
%token<lex> WHILE
%token<lex> WITH

%type<str_val> AdditiveExpression
%type<str_val> AndExpression
%type<str_val> ArgumentList
%type<str_val> ArrayAccess
%type<str_val> ArrayCreationExpression
%type<str_val> ArrayInitializer
%type<str_val> ArrayType
%type<str_val> AssertStatement
%type<str_val> Assignment
%type<str_val> AssignmentExpression
%type<str_val> AssignmentOperator
%type<str_val> BasicForStatement
%type<str_val> BasicForStatementNoShortIf
%type<str_val> Block
%type<str_val> BlockStatement
%type<str_val> BlockStatements
%type<str_val> BreakStatement
%type<str_val> CaseConstants
%type<str_val> CastExpression
%type<str_val> CatchClause
%type<str_val> CatchType
%type<str_val> CatchTypes
%type<str_val> Catches
%type<str_val> ClassBody
%type<str_val> ClassBodyDeclaration
%type<str_val> ClassBodyDeclarations
%type<str_val> ClassDeclaration
%type<str_val> ClassExtends
%type<str_val> ClassInstanceCreationExpression
%type<str_val> ClassMemberDeclaration
%type<str_val> ClassOrInterfaceType
%type<str_val> ClassType
%type<str_val> ClassTypeList
%type<str_val> CompilationUnit
%type<str_val> ConditionalAndExpression
%type<str_val> ConditionalExpression
%type<str_val> ConditionalOrExpression
%type<str_val> ConstructorBody
%type<str_val> ConstructorDeclaration
%type<str_val> ConstructorDeclarator
%type<str_val> ContinueStatement
%type<str_val> DimExpr
%type<str_val> DimExprs
%type<str_val> Dims
%type<str_val> DoStatement
%type<str_val> EmptyStatement
%type<str_val> EnhancedForStatement
%type<str_val> EnhancedForStatementNoShortIf
%type<str_val> EqualityExpression
%type<str_val> ExclusiveOrExpression
%type<str_val> ExplicitConstructorInvocation
%type<str_val> Expression
%type<str_val> ExpressionStatement
%type<str_val> FieldAccess
%type<str_val> FieldDeclaration
%type<str_val> Finally
%type<str_val> FloatingPointType
%type<str_val> ForInit
%type<str_val> ForStatement
%type<str_val> ForStatementNoShortIf
%type<str_val> ForUpdate
%type<str_val> FormalParameter
%type<str_val> FormalParameterList
%type<str_val> Identifier
%type<str_val> IfThenElseStatement
%type<str_val> IfThenElseStatementNoShortIf
%type<str_val> IfThenStatement
%type<str_val> InclusiveOrExpression
%type<str_val> InstanceInitializer
%type<str_val> InstanceofExpression
%type<str_val> IntegralType
%type<str_val> LabeledStatement
%type<str_val> LabeledStatementNoShortIf
%type<str_val> LeftHandSide
%type<str_val> Literal
%type<str_val> LocalVariableDeclaration
%type<str_val> LocalVariableDeclarationStatement
%type<str_val> MethodBody
%type<str_val> MethodDeclaration
%type<str_val> MethodDeclarator
%type<str_val> MethodHeader
%type<str_val> MethodInvocation
%type<str_val> Modifier
%type<str_val> Modifiers
%type<str_val> ModularCompilationUnit
%type<str_val> ModuleDeclaration
%type<str_val> ModuleDirective
%type<str_val> ModuleDirectives
%type<str_val> MultiplicativeExpression
%type<str_val> Name
%type<str_val> Names
%type<str_val> OrdinaryCompilationUnit
%type<str_val> PackageDeclaration
%type<str_val> PostDecrementExpression
%type<str_val> PostIncrementExpression
%type<str_val> PostfixExpression
%type<str_val> PreDecrementExpression
%type<str_val> PreIncrementExpression
%type<str_val> Primary
%type<str_val> PrimaryNoNewArray
%type<str_val> PrimitiveType
%type<str_val> ReferenceType
%type<str_val> RelationalExpression
%type<str_val> RequiresModifier
%type<str_val> RequiresModifiers
%type<str_val> ReturnStatement
%type<str_val> ShiftExpression
%type<str_val> Statement
%type<str_val> StatementExpression
%type<str_val> StatementExpressionList
%type<str_val> StatementNoShortIf
%type<str_val> StatementWithoutTrailingSubstatement
%type<str_val> StaticInitializer
%type<str_val> SwitchBlock
%type<str_val> SwitchBlockStatementGroup
%type<str_val> SwitchBlockStatementGroups
%type<str_val> SwitchExpression
%type<str_val> SwitchLabel
%type<str_val> SwitchLabels
%type<str_val> SwitchStatement
%type<str_val> SynchronizedStatement
%type<str_val> TernaryAction
%type<str_val> ThrowStatement
%type<str_val> Throws
%type<str_val> TopLevelClassOrInterfaceDeclaration
%type<str_val> TopLevelClassOrInterfaceDeclarations
%type<str_val> TryStatement
%type<str_val> Type
%type<str_val> UnaryExpression
%type<str_val> UnaryExpressionNotPlusMinus
%type<str_val> UnqualifiedClassInstanceCreationExpression
%type<str_val> VariableDeclarator
%type<str_val> VariableDeclaratorId
%type<str_val> VariableDeclaratorList
%type<str_val> VariableInitializer
%type<str_val> VariableInitializerList
%type<str_val> WhileStatement
%type<str_val> WhileStatementNoShortIf




%%
Identifier:
	IDENTIFIER 										{vec = {createnode("IDENTIFIER__" + *$1 , emp)}; $$ = createnode("Identifier", vec);}
	;

Literal:
	LITERAL 										{vec = {createnode("LITERAL__" + *$1 , emp)}; $$ = createnode("Literal", vec);}
	;

IntegralType:
	INTEGRALTYPE 										{vec = {createnode("INTEGRALTYPE__" + *$1 , emp)}; $$ = createnode("IntegralType", vec);}
	;

FloatingPointType:
	FLOATINGPOINTTYPE 										{vec = {createnode("FLOATINGPOINTTYPE__" + *$1 , emp)}; $$ = createnode("FloatingPointType", vec);}
	;

Name:
	Identifier 										{vec = {$1}; $$ = createnode("Name", vec);}
|	Name DOT Identifier 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("Name", vec);}
	;

Names:
	Name 										{vec = {$1}; $$ = createnode("Names", vec);}
|	Names COMMA Name 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("Names", vec);}
	;

CompilationUnit:
	OrdinaryCompilationUnit 										{vec = {$1}; root = createnode("CompilationUnit", vec);}
|	ModularCompilationUnit 										{vec = {$1}; root = createnode("CompilationUnit", vec);}
	;

OrdinaryCompilationUnit:
	PackageDeclaration TopLevelClassOrInterfaceDeclarations 										{vec = {$1,$2}; $$ = createnode("OrdinaryCompilationUnit", vec);}
|	TopLevelClassOrInterfaceDeclarations 										{vec = {$1}; $$ = createnode("OrdinaryCompilationUnit", vec);}
|	PackageDeclaration 										{vec = {$1}; $$ = createnode("OrdinaryCompilationUnit", vec);}
	;

TopLevelClassOrInterfaceDeclarations:
	TopLevelClassOrInterfaceDeclaration 										{vec = {$1}; $$ = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
|	TopLevelClassOrInterfaceDeclarations TopLevelClassOrInterfaceDeclaration 										{vec = {$1,$2}; $$ = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
	;

ModularCompilationUnit:
	ModuleDeclaration 										{vec = {$1}; $$ = createnode("ModularCompilationUnit", vec);}
	;

PackageDeclaration:
	PACKAGE Name SEMICOLON 										{vec = {createnode("PACKAGE__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("PackageDeclaration", vec);}
	;

TopLevelClassOrInterfaceDeclaration:
	ClassDeclaration 										{vec = {$1}; $$ = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
|	SEMICOLON 										{vec = {createnode("SEMICOLON__" + *$1 , emp)}; $$ = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
	;

ModuleDeclaration:
	MODULE Name LCB ModuleDirectives RCB 										{vec = {createnode("MODULE__" + *$1 , emp),$2,createnode("LCB__" + *$3 , emp),$4,createnode("RCB__" + *$5 , emp)}; $$ = createnode("ModuleDeclaration", vec);}
|	MODULE Name LCB RCB 										{vec = {createnode("MODULE__" + *$1 , emp),$2,createnode("LCB__" + *$3 , emp),createnode("RCB__" + *$4 , emp)}; $$ = createnode("ModuleDeclaration", vec);}
	;

ModuleDirectives:
	ModuleDirective 										{vec = {$1}; $$ = createnode("ModuleDirectives", vec);}
|	ModuleDirectives ModuleDirective 										{vec = {$1,$2}; $$ = createnode("ModuleDirectives", vec);}
	;

ModuleDirective:
	REQUIRES RequiresModifiers Name SEMICOLON 										{vec = {createnode("REQUIRES__" + *$1 , emp),$2,$3,createnode("SEMICOLON__" + *$4 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	REQUIRES Name SEMICOLON 										{vec = {createnode("REQUIRES__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	EXPORTS Name TO Names SEMICOLON 										{vec = {createnode("EXPORTS__" + *$1 , emp),$2,createnode("TO__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	EXPORTS Name SEMICOLON 										{vec = {createnode("EXPORTS__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	OPENS Name SEMICOLON 										{vec = {createnode("OPENS__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	OPENS Name TO Names SEMICOLON 										{vec = {createnode("OPENS__" + *$1 , emp),$2,createnode("TO__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	USES Name SEMICOLON 										{vec = {createnode("USES__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ModuleDirective", vec);}
|	PROVIDES Name WITH Names SEMICOLON 										{vec = {createnode("PROVIDES__" + *$1 , emp),$2,createnode("WITH__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("ModuleDirective", vec);}
	;

RequiresModifiers:
	RequiresModifier 										{vec = {$1}; $$ = createnode("RequiresModifiers", vec);}
|	RequiresModifiers RequiresModifier 										{vec = {$1,$2}; $$ = createnode("RequiresModifiers", vec);}
	;

RequiresModifier:
	TRANSITIVE 										{vec = {createnode("TRANSITIVE__" + *$1 , emp)}; $$ = createnode("RequiresModifier", vec);}
|	STATIC 										{vec = {createnode("STATIC__" + *$1 , emp)}; $$ = createnode("RequiresModifier", vec);}
	;

Type:
	PrimitiveType 										{vec = {$1}; $$ = createnode("Type", vec);}
|	ReferenceType 										{vec = {$1}; $$ = createnode("Type", vec);}
	;

PrimitiveType:
	IntegralType 										{vec = {$1}; $$ = createnode("PrimitiveType", vec);}
|	FloatingPointType 										{vec = {$1}; $$ = createnode("PrimitiveType", vec);}
|	BOOLEAN 										{vec = {createnode("BOOLEAN__" + *$1 , emp)}; $$ = createnode("PrimitiveType", vec);}
	;

ReferenceType:
	ClassOrInterfaceType 										{vec = {$1}; $$ = createnode("ReferenceType", vec);}
|	ArrayType 										{vec = {$1}; $$ = createnode("ReferenceType", vec);}
	;

ArrayType:
	PrimitiveType Dims 										{vec = {$1,$2}; $$ = createnode("ArrayType", vec);}
|	ClassOrInterfaceType Dims 										{vec = {$1,$2}; $$ = createnode("ArrayType", vec);}
	;

ClassOrInterfaceType:
	ClassType 										{vec = {$1}; $$ = createnode("ClassOrInterfaceType", vec);}
	;

ClassType:
	Name 										{vec = {$1}; $$ = createnode("ClassType", vec);}
	;

ClassDeclaration:
	Modifiers CLASS Identifier ClassExtends ClassBody 										{vec = {$1,createnode("CLASS__" + *$2 , emp),$3,$4,$5}; $$ = createnode("ClassDeclaration", vec);}
|	CLASS Identifier ClassExtends ClassBody 										{vec = {createnode("CLASS__" + *$1 , emp),$2,$3,$4}; $$ = createnode("ClassDeclaration", vec);}
|	Modifiers CLASS Identifier ClassBody 										{vec = {$1,createnode("CLASS__" + *$2 , emp),$3,$4}; $$ = createnode("ClassDeclaration", vec);}
|	CLASS Identifier ClassBody 										{vec = {createnode("CLASS__" + *$1 , emp),$2,$3}; $$ = createnode("ClassDeclaration", vec);}
	;

Modifiers:
	Modifier 										{vec = {$1}; $$ = createnode("Modifiers", vec);}
|	Modifiers Modifier 										{vec = {$1,$2}; $$ = createnode("Modifiers", vec);}
	;

Modifier:
	PUBLIC 										{vec = {createnode("PUBLIC__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	PROTECTED 										{vec = {createnode("PROTECTED__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	PRIVATE 										{vec = {createnode("PRIVATE__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	STATIC 										{vec = {createnode("STATIC__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	ABSTRACT 										{vec = {createnode("ABSTRACT__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	FINAL 										{vec = {createnode("FINAL__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	NATIVE 										{vec = {createnode("NATIVE__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	SYNCHRONIZED 										{vec = {createnode("SYNCHRONIZED__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	TRANSIENT 										{vec = {createnode("TRANSIENT__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
|	VOLATILE 										{vec = {createnode("VOLATILE__" + *$1 , emp)}; $$ = createnode("Modifier", vec);}
	;

ClassExtends:
	EXTENDS ClassType 										{vec = {createnode("EXTENDS__" + *$1 , emp),$2}; $$ = createnode("ClassExtends", vec);}
	;

ClassBody:
	LCB RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("RCB__" + *$2 , emp)}; $$ = createnode("ClassBody", vec);}
|	LCB ClassBodyDeclarations RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("ClassBody", vec);}
	;

ClassBodyDeclarations:
	ClassBodyDeclaration 										{vec = {$1}; $$ = createnode("ClassBodyDeclarations", vec);}
|	ClassBodyDeclarations ClassBodyDeclaration 										{vec = {$1,$2}; $$ = createnode("ClassBodyDeclarations", vec);}
	;

ClassBodyDeclaration:
	ClassMemberDeclaration 										{vec = {$1}; $$ = createnode("ClassBodyDeclaration", vec);}
|	StaticInitializer 										{vec = {$1}; $$ = createnode("ClassBodyDeclaration", vec);}
|	ConstructorDeclaration 										{vec = {$1}; $$ = createnode("ClassBodyDeclaration", vec);}
|	InstanceInitializer 										{vec = {$1}; $$ = createnode("ClassBodyDeclaration", vec);}
	;

ClassMemberDeclaration:
	FieldDeclaration 										{vec = {$1}; $$ = createnode("ClassMemberDeclaration", vec);}
|	MethodDeclaration 										{vec = {$1}; $$ = createnode("ClassMemberDeclaration", vec);}
|	SEMICOLON 										{vec = {createnode("SEMICOLON__" + *$1 , emp)}; $$ = createnode("ClassMemberDeclaration", vec);}
	;

FieldDeclaration:
	Modifiers Type VariableDeclaratorList SEMICOLON 										{vec = {$1,$2,$3,createnode("SEMICOLON__" + *$4 , emp)}; $$ = createnode("FieldDeclaration", vec);}
|	Type VariableDeclaratorList SEMICOLON 										{vec = {$1,$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("FieldDeclaration", vec);}
	;

VariableDeclaratorList:
	VariableDeclarator 										{vec = {$1}; $$ = createnode("VariableDeclaratorList", vec);}
|	VariableDeclaratorList COMMA VariableDeclarator 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("VariableDeclaratorList", vec);}
	;

VariableDeclarator:
	VariableDeclaratorId 										{vec = {$1}; $$ = createnode("VariableDeclarator", vec);}
|	VariableDeclaratorId EQUALTO VariableInitializer 										{vec = {$1,createnode("EQUALTO__" + *$2 , emp),$3}; $$ = createnode("VariableDeclarator", vec);}
	;

VariableDeclaratorId:
	Identifier 										{vec = {$1}; $$ = createnode("VariableDeclaratorId", vec);}
|	VariableDeclaratorId LSB RSB 										{vec = {$1,createnode("LSB__" + *$2 , emp),createnode("RSB__" + *$3 , emp)}; $$ = createnode("VariableDeclaratorId", vec);}
	;

VariableInitializer:
	Expression 										{vec = {$1}; $$ = createnode("VariableInitializer", vec);}
|	ArrayInitializer 										{vec = {$1}; $$ = createnode("VariableInitializer", vec);}
	;

MethodDeclaration:
	MethodHeader MethodBody 										{vec = {$1,$2}; $$ = createnode("MethodDeclaration", vec);}
	;

MethodHeader:
	Modifiers Type MethodDeclarator Throws 										{vec = {$1,$2,$3,$4}; $$ = createnode("MethodHeader", vec);}
|	Type MethodDeclarator Throws 										{vec = {$1,$2,$3}; $$ = createnode("MethodHeader", vec);}
|	Modifiers Type MethodDeclarator 										{vec = {$1,$2,$3}; $$ = createnode("MethodHeader", vec);}
|	Type MethodDeclarator 										{vec = {$1,$2}; $$ = createnode("MethodHeader", vec);}
|	Modifiers VOID MethodDeclarator Throws 										{vec = {$1,createnode("VOID__" + *$2 , emp),$3,$4}; $$ = createnode("MethodHeader", vec);}
|	VOID MethodDeclarator Throws 										{vec = {createnode("VOID__" + *$1 , emp),$2,$3}; $$ = createnode("MethodHeader", vec);}
|	Modifiers VOID MethodDeclarator 										{vec = {$1,createnode("VOID__" + *$2 , emp),$3}; $$ = createnode("MethodHeader", vec);}
|	VOID MethodDeclarator 										{vec = {createnode("VOID__" + *$1 , emp),$2}; $$ = createnode("MethodHeader", vec);}
	;

MethodDeclarator:
	Identifier LRB FormalParameterList RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp)}; $$ = createnode("MethodDeclarator", vec);}
|	Identifier LRB RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),createnode("RRB__" + *$3 , emp)}; $$ = createnode("MethodDeclarator", vec);}
|	MethodDeclarator LSB RSB 										{vec = {$1,createnode("LSB__" + *$2 , emp),createnode("RSB__" + *$3 , emp)}; $$ = createnode("MethodDeclarator", vec);}
	;

FormalParameterList:
	FormalParameter 										{vec = {$1}; $$ = createnode("FormalParameterList", vec);}
|	FormalParameterList COMMA FormalParameter 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("FormalParameterList", vec);}
	;

FormalParameter:
	Type VariableDeclaratorId 										{vec = {$1,$2}; $$ = createnode("FormalParameter", vec);}
|	Modifiers Type VariableDeclaratorId 										{vec = {$1,$2,$3}; $$ = createnode("FormalParameter", vec);}
	;

Throws:
	THROWS ClassTypeList 										{vec = {createnode("THROWS__" + *$1 , emp),$2}; $$ = createnode("Throws", vec);}
	;

ClassTypeList:
	ClassType 										{vec = {$1}; $$ = createnode("ClassTypeList", vec);}
|	ClassTypeList COMMA ClassType 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("ClassTypeList", vec);}
	;

MethodBody:
	Block 										{vec = {$1}; $$ = createnode("MethodBody", vec);}
|	SEMICOLON 										{vec = {createnode("SEMICOLON__" + *$1 , emp)}; $$ = createnode("MethodBody", vec);}
	;

InstanceInitializer:
	Block 										{vec = {$1}; $$ = createnode("InstanceInitializer", vec);}
	;

StaticInitializer:
	STATIC Block 										{vec = {createnode("STATIC__" + *$1 , emp),$2}; $$ = createnode("StaticInitializer", vec);}
	;

ConstructorDeclaration:
	Modifiers ConstructorDeclarator Throws ConstructorBody 										{vec = {$1,$2,$3,$4}; $$ = createnode("ConstructorDeclaration", vec);}
|	ConstructorDeclarator Throws ConstructorBody 										{vec = {$1,$2,$3}; $$ = createnode("ConstructorDeclaration", vec);}
|	Modifiers ConstructorDeclarator ConstructorBody 										{vec = {$1,$2,$3}; $$ = createnode("ConstructorDeclaration", vec);}
|	ConstructorDeclarator ConstructorBody 										{vec = {$1,$2}; $$ = createnode("ConstructorDeclaration", vec);}
	;

ConstructorDeclarator:
	Identifier LRB FormalParameterList RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp)}; $$ = createnode("ConstructorDeclarator", vec);}
|	Identifier LRB RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),createnode("RRB__" + *$3 , emp)}; $$ = createnode("ConstructorDeclarator", vec);}
	;

ConstructorBody:
	LCB ExplicitConstructorInvocation BlockStatements RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,$3,createnode("RCB__" + *$4 , emp)}; $$ = createnode("ConstructorBody", vec);}
|	LCB BlockStatements RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("ConstructorBody", vec);}
|	LCB ExplicitConstructorInvocation RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("ConstructorBody", vec);}
|	LCB RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("RCB__" + *$2 , emp)}; $$ = createnode("ConstructorBody", vec);}
	;

ExplicitConstructorInvocation:
	THIS LRB ArgumentList RRB SEMICOLON 										{vec = {createnode("THIS__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	THIS LRB RRB SEMICOLON 										{vec = {createnode("THIS__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("RRB__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {createnode("SUPER__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	SUPER LRB RRB SEMICOLON 										{vec = {createnode("SUPER__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("RRB__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Name DOT SUPER LRB RRB SEMICOLON 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("LRB__" + *$4 , emp),createnode("RRB__" + *$5 , emp),createnode("SEMICOLON__" + *$6 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Name DOT SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("LRB__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),createnode("SEMICOLON__" + *$7 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Primary DOT SUPER LRB RRB SEMICOLON 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("LRB__" + *$4 , emp),createnode("RRB__" + *$5 , emp),createnode("SEMICOLON__" + *$6 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Primary DOT SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("LRB__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),createnode("SEMICOLON__" + *$7 , emp)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
	;

ArrayInitializer:
	LCB RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("RCB__" + *$2 , emp)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB VariableInitializerList RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB COMMA RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("COMMA__" + *$2 , emp),createnode("RCB__" + *$3 , emp)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB VariableInitializerList COMMA RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("COMMA__" + *$3 , emp),createnode("RCB__" + *$4 , emp)}; $$ = createnode("ArrayInitializer", vec);}
	;

VariableInitializerList:
	VariableInitializer 										{vec = {$1}; $$ = createnode("VariableInitializerList", vec);}
|	VariableInitializerList COMMA VariableInitializer 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("VariableInitializerList", vec);}
	;

Block:
	LCB BlockStatements RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("Block", vec);}
|	LCB RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("RCB__" + *$2 , emp)}; $$ = createnode("Block", vec);}
	;

BlockStatements:
	BlockStatements BlockStatement 										{vec = {$1,$2}; $$ = createnode("BlockStatements", vec);}
|	BlockStatement 										{vec = {$1}; $$ = createnode("BlockStatements", vec);}
	;

BlockStatement:
	LocalVariableDeclarationStatement 										{vec = {$1}; $$ = createnode("BlockStatement", vec);}
|	Statement 										{vec = {$1}; $$ = createnode("BlockStatement", vec);}
	;

LocalVariableDeclarationStatement:
	LocalVariableDeclaration SEMICOLON 										{vec = {$1,createnode("SEMICOLON__" + *$2 , emp)}; $$ = createnode("LocalVariableDeclarationStatement", vec);}
	;

LocalVariableDeclaration:
	Type VariableDeclaratorList 										{vec = {$1,$2}; $$ = createnode("LocalVariableDeclaration", vec);}
|	VAR VariableDeclaratorList 										{vec = {createnode("VAR__" + *$1 , emp),$2}; $$ = createnode("LocalVariableDeclaration", vec);}
|	Modifiers Type VariableDeclaratorList 										{vec = {$1,$2,$3}; $$ = createnode("LocalVariableDeclaration", vec);}
|	Modifiers VAR VariableDeclaratorList 										{vec = {$1,createnode("VAR__" + *$2 , emp),$3}; $$ = createnode("LocalVariableDeclaration", vec);}
	;

Statement:
	StatementWithoutTrailingSubstatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
|	LabeledStatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
|	IfThenStatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
|	IfThenElseStatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
|	WhileStatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
|	ForStatement 										{vec = {$1}; $$ = createnode("Statement", vec);}
	;

StatementNoShortIf:
	StatementWithoutTrailingSubstatement 										{vec = {$1}; $$ = createnode("StatementNoShortIf", vec);}
|	LabeledStatementNoShortIf 										{vec = {$1}; $$ = createnode("StatementNoShortIf", vec);}
|	IfThenElseStatementNoShortIf 										{vec = {$1}; $$ = createnode("StatementNoShortIf", vec);}
|	WhileStatementNoShortIf 										{vec = {$1}; $$ = createnode("StatementNoShortIf", vec);}
|	ForStatementNoShortIf 										{vec = {$1}; $$ = createnode("StatementNoShortIf", vec);}
	;

StatementWithoutTrailingSubstatement:
	Block 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	EmptyStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	ExpressionStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	AssertStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	SwitchStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	DoStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	BreakStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	ContinueStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	ReturnStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	SynchronizedStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	ThrowStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
|	TryStatement 										{vec = {$1}; $$ = createnode("StatementWithoutTrailingSubstatement", vec);}
	;

AssertStatement:
	ASSERT Expression SEMICOLON 										{vec = {createnode("ASSERT__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("AssertStatement", vec);}
|	ASSERT Expression COLON Expression SEMICOLON 										{vec = {createnode("ASSERT__" + *$1 , emp),$2,createnode("COLON__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp)}; $$ = createnode("AssertStatement", vec);}
	;

EmptyStatement:
	SEMICOLON 										{vec = {createnode("SEMICOLON__" + *$1 , emp)}; $$ = createnode("EmptyStatement", vec);}
	;

LabeledStatement:
	Identifier COLON Statement 										{vec = {$1,createnode("COLON__" + *$2 , emp),$3}; $$ = createnode("LabeledStatement", vec);}
	;

LabeledStatementNoShortIf:
	Identifier COLON StatementNoShortIf 										{vec = {$1,createnode("COLON__" + *$2 , emp),$3}; $$ = createnode("LabeledStatementNoShortIf", vec);}
	;

ExpressionStatement:
	StatementExpression SEMICOLON 										{vec = {$1,createnode("SEMICOLON__" + *$2 , emp)}; $$ = createnode("ExpressionStatement", vec);}
	;

StatementExpression:
	Assignment 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PreIncrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PreDecrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PostIncrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PostDecrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	MethodInvocation 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	ClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
	;

IfThenStatement:
	IF LRB Expression RRB Statement 										{vec = {createnode("IF__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("IfThenStatement", vec);}
	;

IfThenElseStatement:
	IF LRB Expression RRB StatementNoShortIf ELSE Statement 										{vec = {createnode("IF__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5,createnode("ELSE__" + *$6 , emp),$7}; $$ = createnode("IfThenElseStatement", vec);}
	;

IfThenElseStatementNoShortIf:
	IF LRB Expression RRB StatementNoShortIf ELSE StatementNoShortIf 										{vec = {createnode("IF__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5,createnode("ELSE__" + *$6 , emp),$7}; $$ = createnode("IfThenElseStatementNoShortIf", vec);}
	;

SwitchStatement:
	SWITCH LRB Expression RRB SwitchBlock 										{vec = {createnode("SWITCH__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("SwitchStatement", vec);}
	;

SwitchBlock:
	LCB SwitchBlockStatementGroups SwitchLabels RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,$3,createnode("RCB__" + *$4 , emp)}; $$ = createnode("SwitchBlock", vec);}
|	LCB SwitchLabels RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("SwitchBlock", vec);}
|	LCB SwitchBlockStatementGroups RCB 										{vec = {createnode("LCB__" + *$1 , emp),$2,createnode("RCB__" + *$3 , emp)}; $$ = createnode("SwitchBlock", vec);}
|	LCB RCB 										{vec = {createnode("LCB__" + *$1 , emp),createnode("RCB__" + *$2 , emp)}; $$ = createnode("SwitchBlock", vec);}
	;

SwitchBlockStatementGroups:
	SwitchBlockStatementGroup 										{vec = {$1}; $$ = createnode("SwitchBlockStatementGroups", vec);}
|	SwitchBlockStatementGroups SwitchBlockStatementGroup 										{vec = {$1,$2}; $$ = createnode("SwitchBlockStatementGroups", vec);}
	;

SwitchLabels:
	SwitchLabel 										{vec = {$1}; $$ = createnode("SwitchLabels", vec);}
|	SwitchLabels SwitchLabel 										{vec = {$1,$2}; $$ = createnode("SwitchLabels", vec);}
	;

SwitchBlockStatementGroup:
	SwitchLabels BlockStatements 										{vec = {$1,$2}; $$ = createnode("SwitchBlockStatementGroup", vec);}
	;

SwitchLabel:
	CASE CaseConstants COLON 										{vec = {createnode("CASE__" + *$1 , emp),$2,createnode("COLON__" + *$3 , emp)}; $$ = createnode("SwitchLabel", vec);}
|	DEFAULT COLON 										{vec = {createnode("DEFAULT__" + *$1 , emp),createnode("COLON__" + *$2 , emp)}; $$ = createnode("SwitchLabel", vec);}
	;

CaseConstants:
	ConditionalExpression 										{vec = {$1}; $$ = createnode("CaseConstants", vec);}
|	CaseConstants COMMA ConditionalExpression 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("CaseConstants", vec);}
	;

WhileStatement:
	WHILE LRB Expression RRB Statement 										{vec = {createnode("WHILE__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("WhileStatement", vec);}
	;

WhileStatementNoShortIf:
	WHILE LRB Expression RRB StatementNoShortIf 										{vec = {createnode("WHILE__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("WhileStatementNoShortIf", vec);}
	;

DoStatement:
	DO Statement WHILE LRB Expression RRB SEMICOLON 										{vec = {createnode("DO__" + *$1 , emp),$2,createnode("WHILE__" + *$3 , emp),createnode("LRB__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),createnode("SEMICOLON__" + *$7 , emp)}; $$ = createnode("DoStatement", vec);}
	;

ForStatement:
	BasicForStatement 										{vec = {$1}; $$ = createnode("ForStatement", vec);}
|	EnhancedForStatement 										{vec = {$1}; $$ = createnode("ForStatement", vec);}
	;

ForStatementNoShortIf:
	BasicForStatementNoShortIf 										{vec = {$1}; $$ = createnode("ForStatementNoShortIf", vec);}
|	EnhancedForStatementNoShortIf 										{vec = {$1}; $$ = createnode("ForStatementNoShortIf", vec);}
	;

BasicForStatement:
	FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),$5,createnode("SEMICOLON__" + *$6 , emp),$7,createnode("RRB__" + *$8 , emp),$9}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp),$6,createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp),$6,createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),$5,createnode("SEMICOLON__" + *$6 , emp),createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp),createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp),createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON SEMICOLON RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp),createnode("RRB__" + *$5 , emp),$6}; $$ = createnode("BasicForStatement", vec);}
	;

BasicForStatementNoShortIf:
	FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),$5,createnode("SEMICOLON__" + *$6 , emp),$7,createnode("RRB__" + *$8 , emp),$9}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp),$6,createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp),$6,createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),$5,createnode("SEMICOLON__" + *$6 , emp),createnode("RRB__" + *$7 , emp),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),$4,createnode("SEMICOLON__" + *$5 , emp),createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("SEMICOLON__" + *$4 , emp),createnode("SEMICOLON__" + *$5 , emp),createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),createnode("SEMICOLON__" + *$3 , emp),createnode("SEMICOLON__" + *$4 , emp),createnode("RRB__" + *$5 , emp),$6}; $$ = createnode("BasicForStatementNoShortIf", vec);}
	;

ForInit:
	StatementExpressionList 										{vec = {$1}; $$ = createnode("ForInit", vec);}
|	LocalVariableDeclaration 										{vec = {$1}; $$ = createnode("ForInit", vec);}
	;

ForUpdate:
	StatementExpressionList 										{vec = {$1}; $$ = createnode("ForUpdate", vec);}
	;

StatementExpressionList:
	StatementExpressionList COMMA StatementExpression 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("StatementExpressionList", vec);}
|	StatementExpression 										{vec = {$1}; $$ = createnode("StatementExpressionList", vec);}
	;

EnhancedForStatement:
	FOR LRB LocalVariableDeclaration COLON Expression RRB Statement 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("COLON__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("EnhancedForStatement", vec);}
	;

EnhancedForStatementNoShortIf:
	FOR LRB LocalVariableDeclaration COLON Expression RRB StatementNoShortIf 										{vec = {createnode("FOR__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("COLON__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("EnhancedForStatementNoShortIf", vec);}
	;

BreakStatement:
	BREAK Identifier SEMICOLON 										{vec = {createnode("BREAK__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("BreakStatement", vec);}
|	BREAK SEMICOLON 										{vec = {createnode("BREAK__" + *$1 , emp),createnode("SEMICOLON__" + *$2 , emp)}; $$ = createnode("BreakStatement", vec);}
	;

ContinueStatement:
	CONTINUE Identifier SEMICOLON 										{vec = {createnode("CONTINUE__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ContinueStatement", vec);}
|	CONTINUE SEMICOLON 										{vec = {createnode("CONTINUE__" + *$1 , emp),createnode("SEMICOLON__" + *$2 , emp)}; $$ = createnode("ContinueStatement", vec);}
	;

ReturnStatement:
	RETURN SEMICOLON 										{vec = {createnode("RETURN__" + *$1 , emp),createnode("SEMICOLON__" + *$2 , emp)}; $$ = createnode("ReturnStatement", vec);}
|	RETURN Expression SEMICOLON 										{vec = {createnode("RETURN__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ReturnStatement", vec);}
	;

ThrowStatement:
	THROW Expression SEMICOLON 										{vec = {createnode("THROW__" + *$1 , emp),$2,createnode("SEMICOLON__" + *$3 , emp)}; $$ = createnode("ThrowStatement", vec);}
	;

SynchronizedStatement:
	SYNCHRONIZED LRB Expression RRB Block 										{vec = {createnode("SYNCHRONIZED__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("SynchronizedStatement", vec);}
	;

TryStatement:
	TRY Block Catches 										{vec = {createnode("TRY__" + *$1 , emp),$2,$3}; $$ = createnode("TryStatement", vec);}
|	TRY Block Finally 										{vec = {createnode("TRY__" + *$1 , emp),$2,$3}; $$ = createnode("TryStatement", vec);}
|	TRY Block Catches Finally 										{vec = {createnode("TRY__" + *$1 , emp),$2,$3,$4}; $$ = createnode("TryStatement", vec);}
	;

Catches:
	Catches CatchClause 										{vec = {$1,$2}; $$ = createnode("Catches", vec);}
|	CatchClause 										{vec = {$1}; $$ = createnode("Catches", vec);}
	;

CatchClause:
	CATCH LRB CatchType VariableDeclaratorId RRB Block 										{vec = {createnode("CATCH__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,$4,createnode("RRB__" + *$5 , emp),$6}; $$ = createnode("CatchClause", vec);}
|	CATCH LRB Modifiers CatchType VariableDeclaratorId RRB Block 										{vec = {createnode("CATCH__" + *$1 , emp),createnode("LRB__" + *$2 , emp),$3,$4,$5,createnode("RRB__" + *$6 , emp),$7}; $$ = createnode("CatchClause", vec);}
	;

CatchType:
	Name 										{vec = {$1}; $$ = createnode("CatchType", vec);}
|	Name CatchTypes 										{vec = {$1,$2}; $$ = createnode("CatchType", vec);}
	;

CatchTypes:
	BITOR ClassType 										{vec = {createnode("BITOR__" + *$1 , emp),$2}; $$ = createnode("CatchTypes", vec);}
|	CatchTypes BITOR CatchType 										{vec = {$1,createnode("BITOR__" + *$2 , emp),$3}; $$ = createnode("CatchTypes", vec);}
	;

Finally:
	FINALLY Block 										{vec = {createnode("FINALLY__" + *$1 , emp),$2}; $$ = createnode("Finally", vec);}
	;

Primary:
	PrimaryNoNewArray 										{vec = {$1}; $$ = createnode("Primary", vec);}
|	ArrayCreationExpression 										{vec = {$1}; $$ = createnode("Primary", vec);}
	;

PrimaryNoNewArray:
	Literal 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	THIS 										{vec = {createnode("THIS__" + *$1 , emp)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	Name DOT THIS 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("THIS__" + *$3 , emp)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	LRB Expression RRB 										{vec = {createnode("LRB__" + *$1 , emp),$2,createnode("RRB__" + *$3 , emp)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	ClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	FieldAccess 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	ArrayAccess 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	MethodInvocation 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
	;

ClassInstanceCreationExpression:
	UnqualifiedClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("ClassInstanceCreationExpression", vec);}
|	Name DOT UnqualifiedClassInstanceCreationExpression 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("ClassInstanceCreationExpression", vec);}
|	Primary DOT UnqualifiedClassInstanceCreationExpression 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("ClassInstanceCreationExpression", vec);}
	;

UnqualifiedClassInstanceCreationExpression:
	NEW ClassOrInterfaceType LRB ArgumentList RRB 										{vec = {createnode("NEW__" + *$1 , emp),$2,createnode("LRB__" + *$3 , emp),$4,createnode("RRB__" + *$5 , emp)}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
|	NEW ClassOrInterfaceType LRB RRB ClassBody 										{vec = {createnode("NEW__" + *$1 , emp),$2,createnode("LRB__" + *$3 , emp),createnode("RRB__" + *$4 , emp),$5}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
|	NEW ClassOrInterfaceType LRB ArgumentList RRB ClassBody 										{vec = {createnode("NEW__" + *$1 , emp),$2,createnode("LRB__" + *$3 , emp),$4,createnode("RRB__" + *$5 , emp),$6}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
|	NEW ClassOrInterfaceType LRB RRB 										{vec = {createnode("NEW__" + *$1 , emp),$2,createnode("LRB__" + *$3 , emp),createnode("RRB__" + *$4 , emp)}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
	;

FieldAccess:
	Primary DOT Identifier 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("FieldAccess", vec);}
|	SUPER DOT Identifier 										{vec = {createnode("SUPER__" + *$1 , emp),createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("FieldAccess", vec);}
|	Name DOT Identifier 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3}; $$ = createnode("FieldAccess", vec);}
	;

ArrayAccess:
	Name LSB Expression RSB 										{vec = {$1,createnode("LSB__" + *$2 , emp),$3,createnode("RSB__" + *$4 , emp)}; $$ = createnode("ArrayAccess", vec);}
|	PrimaryNoNewArray LSB Expression RSB 										{vec = {$1,createnode("LSB__" + *$2 , emp),$3,createnode("RSB__" + *$4 , emp)}; $$ = createnode("ArrayAccess", vec);}
	;

MethodInvocation:
	Name LRB RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),createnode("RSB__" + *$3 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	Name LRB ArgumentList RRB 										{vec = {$1,createnode("LRB__" + *$2 , emp),$3,createnode("RRB__" + *$4 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	Primary DOT Identifier LRB RRB 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3,createnode("LRB__" + *$4 , emp),createnode("RRB__" + *$5 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	Primary DOT Identifier LRB ArgumentList RRB 										{vec = {$1,createnode("DOT__" + *$2 , emp),$3,createnode("LRB__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	SUPER DOT Identifier LRB RRB 										{vec = {createnode("SUPER__" + *$1 , emp),createnode("DOT__" + *$2 , emp),$3,createnode("LRB__" + *$4 , emp),createnode("RRB__" + *$5 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	SUPER DOT Identifier LRB ArgumentList RRB 										{vec = {createnode("SUPER__" + *$1 , emp),createnode("DOT__" + *$2 , emp),$3,createnode("LRB__" + *$4 , emp),$5,createnode("RRB__" + *$6 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	Name DOT SUPER DOT Identifier LRB RRB 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("DOT__" + *$4 , emp),$5,createnode("LRB__" + *$6 , emp),createnode("RRB__" + *$7 , emp)}; $$ = createnode("MethodInvocation", vec);}
|	Name DOT SUPER DOT Identifier LRB ArgumentList RRB 										{vec = {$1,createnode("DOT__" + *$2 , emp),createnode("SUPER__" + *$3 , emp),createnode("DOT__" + *$4 , emp),$5,createnode("LRB__" + *$6 , emp),$7,createnode("RRB__" + *$8 , emp)}; $$ = createnode("MethodInvocation", vec);}
	;

ArgumentList:
	Expression 										{vec = {$1}; $$ = createnode("ArgumentList", vec);}
|	ArgumentList COMMA Expression 										{vec = {$1,createnode("COMMA__" + *$2 , emp),$3}; $$ = createnode("ArgumentList", vec);}
	;

ArrayCreationExpression:
	NEW PrimitiveType DimExprs 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW PrimitiveType DimExprs Dims 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType DimExprs 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType DimExprs Dims 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW PrimitiveType Dims ArrayInitializer 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType Dims ArrayInitializer 										{vec = {createnode("NEW__" + *$1 , emp),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
	;

DimExprs:
	DimExprs DimExpr 										{vec = {$1,$2}; $$ = createnode("DimExprs", vec);}
|	DimExpr 										{vec = {$1}; $$ = createnode("DimExprs", vec);}
	;

DimExpr:
	LSB Expression RSB 										{vec = {createnode("LSB__" + *$1 , emp),$2,createnode("RSB__" + *$3 , emp)}; $$ = createnode("DimExpr", vec);}
	;

Dims:
	LSB RSB 										{vec = {createnode("LSB__" + *$1 , emp),createnode("RSB__" + *$2 , emp)}; $$ = createnode("Dims", vec);}
|	Dims LSB RSB 										{vec = {$1,createnode("LSB__" + *$2 , emp),createnode("RSB__" + *$3 , emp)}; $$ = createnode("Dims", vec);}
	;

Expression:
	AssignmentExpression 										{vec = {$1}; $$ = createnode("Expression", vec);}
	;

AssignmentExpression:
	ConditionalExpression 										{vec = {$1}; $$ = createnode("AssignmentExpression", vec);}
|	Assignment 										{vec = {$1}; $$ = createnode("AssignmentExpression", vec);}
	;

Assignment:
	LeftHandSide AssignmentOperator Expression 										{vec = {$1,$2,$3}; $$ = createnode("Assignment", vec);}
	;

LeftHandSide:
	Name 										{vec = {$1}; $$ = createnode("LeftHandSide", vec);}
|	FieldAccess 										{vec = {$1}; $$ = createnode("LeftHandSide", vec);}
|	ArrayAccess 										{vec = {$1}; $$ = createnode("LeftHandSide", vec);}
	;

AssignmentOperator:
	EQUALTO 										{vec = {createnode("EQUALTO__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
|	PLUSET 										{vec = {createnode("PLUSET__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
|	MINUSET 										{vec = {createnode("MINUSET__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
|	MULTET 										{vec = {createnode("MULTET__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
|	DIVET 										{vec = {createnode("DIVET__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
|	ANDET 										{vec = {createnode("ANDET__" + *$1 , emp)}; $$ = createnode("AssignmentOperator", vec);}
	;

ConditionalExpression:
	ConditionalOrExpression 										{vec = {$1}; $$ = createnode("ConditionalExpression", vec);}
|	ConditionalOrExpression QUEST TernaryAction 										{vec = {$1,createnode("QUEST__" + *$2 , emp),$3}; $$ = createnode("ConditionalExpression", vec);}
	;

TernaryAction:
	Expression COLON ConditionalExpression 										{vec = {$1,createnode("COLON__" + *$2 , emp),$3}; $$ = createnode("TernaryAction", vec);}
	;

ConditionalOrExpression:
	ConditionalAndExpression 										{vec = {$1}; $$ = createnode("ConditionalOrExpression", vec);}
|	ConditionalOrExpression OR ConditionalAndExpression 										{vec = {$1,createnode("OR__" + *$2 , emp),$3}; $$ = createnode("ConditionalOrExpression", vec);}
	;

ConditionalAndExpression:
	InclusiveOrExpression 										{vec = {$1}; $$ = createnode("ConditionalAndExpression", vec);}
|	ConditionalAndExpression AND InclusiveOrExpression 										{vec = {$1,createnode("AND__" + *$2 , emp),$3}; $$ = createnode("ConditionalAndExpression", vec);}
	;

InclusiveOrExpression:
	ExclusiveOrExpression 										{vec = {$1}; $$ = createnode("InclusiveOrExpression", vec);}
|	InclusiveOrExpression BITOR ExclusiveOrExpression 										{vec = {$1,createnode("BITOR__" + *$2 , emp),$3}; $$ = createnode("InclusiveOrExpression", vec);}
	;

ExclusiveOrExpression:
	AndExpression 										{vec = {$1}; $$ = createnode("ExclusiveOrExpression", vec);}
|	ExclusiveOrExpression POW AndExpression 										{vec = {$1,createnode("POW__" + *$2 , emp),$3}; $$ = createnode("ExclusiveOrExpression", vec);}
	;

AndExpression:
	EqualityExpression 										{vec = {$1}; $$ = createnode("AndExpression", vec);}
|	AndExpression BITAND EqualityExpression 										{vec = {$1,createnode("BITAND__" + *$2 , emp),$3}; $$ = createnode("AndExpression", vec);}
	;

EqualityExpression:
	RelationalExpression 										{vec = {$1}; $$ = createnode("EqualityExpression", vec);}
|	EqualityExpression EQ RelationalExpression 										{vec = {$1,createnode("EQ__" + *$2 , emp),$3}; $$ = createnode("EqualityExpression", vec);}
|	EqualityExpression NEQ RelationalExpression 										{vec = {$1,createnode("NEQ__" + *$2 , emp),$3}; $$ = createnode("EqualityExpression", vec);}
	;

RelationalExpression:
	ShiftExpression 										{vec = {$1}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression LT ShiftExpression 										{vec = {$1,createnode("LT__" + *$2 , emp),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression GT ShiftExpression 										{vec = {$1,createnode("GT__" + *$2 , emp),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression LEQ ShiftExpression 										{vec = {$1,createnode("LEQ__" + *$2 , emp),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression GEQ ShiftExpression 										{vec = {$1,createnode("GEQ__" + *$2 , emp),$3}; $$ = createnode("RelationalExpression", vec);}
|	InstanceofExpression 										{vec = {$1}; $$ = createnode("RelationalExpression", vec);}
	;

InstanceofExpression:
	RelationalExpression INSTANCEOF ReferenceType 										{vec = {$1,createnode("INSTANCEOF__" + *$2 , emp),$3}; $$ = createnode("InstanceofExpression", vec);}
	;

ShiftExpression:
	AdditiveExpression 										{vec = {$1}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression LEFTSHIFT AdditiveExpression 										{vec = {$1,createnode("LEFTSHIFT__" + *$2 , emp),$3}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression RIGHTSHIFT AdditiveExpression 										{vec = {$1,createnode("RIGHTSHIFT__" + *$2 , emp),$3}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression THREEGREAT AdditiveExpression 										{vec = {$1,createnode("THREEGREAT__" + *$2 , emp),$3}; $$ = createnode("ShiftExpression", vec);}
	;

AdditiveExpression:
	MultiplicativeExpression 										{vec = {$1}; $$ = createnode("AdditiveExpression", vec);}
|	AdditiveExpression PLUS MultiplicativeExpression 										{vec = {$1,createnode("PLUS__" + *$2 , emp),$3}; $$ = createnode("AdditiveExpression", vec);}
|	AdditiveExpression MINUS MultiplicativeExpression 										{vec = {$1,createnode("MINUS__" + *$2 , emp),$3}; $$ = createnode("AdditiveExpression", vec);}
	;

MultiplicativeExpression:
	UnaryExpression 										{vec = {$1}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression MULT UnaryExpression 										{vec = {$1,createnode("MULT__" + *$2 , emp),$3}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression DIVIDE UnaryExpression 										{vec = {$1,createnode("DIVIDE__" + *$2 , emp),$3}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression MODULO UnaryExpression 										{vec = {$1,createnode("MODULO__" + *$2 , emp),$3}; $$ = createnode("MultiplicativeExpression", vec);}
	;

UnaryExpression:
	PreIncrementExpression 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
|	PreDecrementExpression 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
|	PLUS UnaryExpression 										{vec = {createnode("PLUS__" + *$1 , emp),$2}; $$ = createnode("UnaryExpression", vec);}
|	MINUS UnaryExpression 										{vec = {createnode("MINUS__" + *$1 , emp),$2}; $$ = createnode("UnaryExpression", vec);}
|	UnaryExpressionNotPlusMinus 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
	;

PreIncrementExpression:
	INCREMENT UnaryExpression 										{vec = {createnode("INCREMENT__" + *$1 , emp),$2}; $$ = createnode("PreIncrementExpression", vec);}
	;

PreDecrementExpression:
	DECREMENT UnaryExpression 										{vec = {createnode("DECREMENT__" + *$1 , emp),$2}; $$ = createnode("PreDecrementExpression", vec);}
	;

UnaryExpressionNotPlusMinus:
	PostfixExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	TILDE UnaryExpression 										{vec = {createnode("TILDE__" + *$1 , emp),$2}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	NOT UnaryExpression 										{vec = {createnode("NOT__" + *$1 , emp),$2}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	CastExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	SwitchExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
	;

PostfixExpression:
	Primary 										{vec = {$1}; $$ = createnode("PostfixExpression", vec);}
|   Name                                            {vec = {$1}; $$ = createnode("PostfixExpression", vec);}
|	PostIncrementExpression 										{vec = {$1}; $$ = createnode("PostfixExpression", vec);}
|	PostDecrementExpression 										{vec = {$1}; $$ = createnode("PostfixExpression", vec);}
	;

PostIncrementExpression:
	PostfixExpression INCREMENT 										{vec = {$1,createnode("INCREMENT__" + *$2 , emp)}; $$ = createnode("PostIncrementExpression", vec);}
	;

PostDecrementExpression:
	PostfixExpression DECREMENT 										{vec = {$1,createnode("DECREMENT__" + *$2 , emp)}; $$ = createnode("PostDecrementExpression", vec);}
	;

CastExpression:
	LSB PrimitiveType RSB UnaryExpression 										{vec = {createnode("LSB__" + *$1 , emp),$2,createnode("RSB__" + *$3 , emp),$4}; $$ = createnode("CastExpression", vec);}
|	LSB ReferenceType RSB UnaryExpressionNotPlusMinus 										{vec = {createnode("LSB__" + *$1 , emp),$2,createnode("RSB__" + *$3 , emp),$4}; $$ = createnode("CastExpression", vec);}
	;

SwitchExpression:
	SWITCH LSB Expression RSB SwitchBlock 										{vec = {createnode("SWITCH__" + *$1 , emp),createnode("LSB__" + *$2 , emp),$3,createnode("RSB__" + *$4 , emp),$5}; $$ = createnode("SwitchExpression", vec);}
	;

%%

typedef long long ll;
set<char> escapes = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\'', '\"', '\?', '\\'};


void dfs(Node* root){
    cout<<"\t"<<(ll)root<<"[label=\"";
    for(char c:root->val){
        if(escapes.find(c)!=escapes.end()){
            cout<<"\\";
        }
        cout<<c;
    }cout<<"\"];\n";
    for(auto child:root->children){
        cout<<"\t"<<(ll)root<<" -> "<<(ll)child<<";\n";
    }
    for(auto child:root->children){
        dfs(child);
    }
}


void make_ast(Node* root, Node* par, int idx){
    if(root!=par && root->children.size()==1){
        par->children[idx] = root->children[0];
        free(root);
        make_ast(par->children[idx], par, idx);
    }else{
        for(int i=0;i<root->children.size();i++){
            make_ast(root->children[i], root, i);
        }
    }
}

set<string> to_do = {"INSTANCEOF","EQUALTO","PLUSET","MINUSET","MULTET","DIVET","ANDET","LT","GT","LEQ","GEQ","OR","AND","BITOR","BITAND","POW","EQ","NEQ","LEFTSHIFT","RIGHTSHIFT","THREEGREAT","PLUS","MINUS","MULT","DIVIDE","MODULO","TILDE","NOT","QUEST","COLON"};

string extractor(string s){
    string t="";
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='_' && s[i+1]=='_'){
            break;
        }
        t+=s[i];
    }
    return t;
}

bool revise_ast(Node* root, Node* par, int idx){
    if(root->children.size()==0){
        if(to_do.find(extractor(root->val))!=to_do.end()){
            par->val = root->val;
            (par->children).erase((par->children).begin()+idx);
            free(root);
            return true;
        }
    }else{
        for(int i=0;i<root->children.size();i++){
            if(revise_ast(root->children[i], root, i)){
                i--;
            }
        }
    }
    return false;
}

int main(int argc, char* argv[]){
    try{
		string inp = argv[1];
		string outp = argv[2];
        freopen(inp.c_str(), "r", stdin);
        freopen(outp.c_str(), "w", stdout);
        yyparse();
        cout<<"strict digraph {\n";
        make_ast(root, root, 0);
        revise_ast(root, root, 0);
        dfs(root);
        cout<<"}\n";
    }catch (...){
        cerr << "Compilation Error\n";
    }
    return 0;
}