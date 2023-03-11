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

vector<Node *> empty;
vector<Node *> vec;
%}


%union{
    struct Node* str_val;
}

%start CompilationUnit

%token<str_val> ABSTRACT
%token<str_val> AND
%token<str_val> ANDET
%token<str_val> ASSERT
%token<str_val> AT
%token<str_val> BITAND
%token<str_val> BITOR
%token<str_val> BOOLEAN
%token<str_val> BREAK
%token<str_val> CASE
%token<str_val> CATCH
%token<str_val> CLASS
%token<str_val> COLON
%token<str_val> COMMA
%token<str_val> CONTINUE
%token<str_val> DECREMENT
%token<str_val> DEFAULT
%token<str_val> DIVET
%token<str_val> DIVIDE
%token<str_val> DO
%token<str_val> DOT
%token<str_val> ELSE
%token<str_val> EQ
%token<str_val> EQUALTO
%token<str_val> EXPORTS
%token<str_val> EXTENDS
%token<str_val> FINAL
%token<str_val> FINALLY
%token<str_val> FLOATINGPOINTTYPE
%token<str_val> FOR
%token<str_val> GEQ
%token<str_val> GT
%token<str_val> IDENTIFIER
%token<str_val> IF
%token<str_val> INCREMENT
%token<str_val> INSTANCEOF
%token<str_val> INTEGRALTYPE
%token<str_val> LCB
%token<str_val> LEFTSHIFT
%token<str_val> LEQ
%token<str_val> LITERAL
%token<str_val> LRB
%token<str_val> LSB
%token<str_val> LT
%token<str_val> MINUS
%token<str_val> MINUSET
%token<str_val> MODULE
%token<str_val> MODULO
%token<str_val> MULT
%token<str_val> MULTET
%token<str_val> NATIVE
%token<str_val> NEQ
%token<str_val> NEW
%token<str_val> NOT
%token<str_val> OPENS
%token<str_val> OR
%token<str_val> PACKAGE
%token<str_val> PLUS
%token<str_val> PLUSET
%token<str_val> POW
%token<str_val> PRIVATE
%token<str_val> PROTECTED
%token<str_val> PROVIDES
%token<str_val> PUBLIC
%token<str_val> QUEST
%token<str_val> RCB
%token<str_val> REQUIRES
%token<str_val> RETURN
%token<str_val> RIGHTSHIFT
%token<str_val> RRB
%token<str_val> RSB
%token<str_val> SEMICOLON
%token<str_val> STATIC
%token<str_val> SUPER
%token<str_val> SWITCH
%token<str_val> SYNCHRONIZED
%token<str_val> THIS
%token<str_val> THREEGREAT
%token<str_val> THROW
%token<str_val> THROWS
%token<str_val> TILDE
%token<str_val> TO
%token<str_val> TRANSIENT
%token<str_val> TRANSITIVE
%token<str_val> TRIPLEDOT
%token<str_val> TRY
%token<str_val> TWOCOLON
%token<str_val> USES
%token<str_val> VAR
%token<str_val> VOID
%token<str_val> VOLATILE
%token<str_val> WHILE
%token<str_val> WITH

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
%type<str_val> ClassBodyDeclarationRec
%type<str_val> ClassDeclaration
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
%type<str_val> Super
%type<str_val> SwitchBlock
%type<str_val> SwitchBlockStatementGroup
%type<str_val> SwitchBlockStatementGroups
%type<str_val> SwitchExpression
%type<str_val> SwitchLabel
%type<str_val> SwitchLabels
%type<str_val> SwitchStatement
%type<str_val> SynchronizedStatement
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
%type<str_val> VariableDeclarators
%type<str_val> VariableInitializer
%type<str_val> VariableInitializerList
%type<str_val> WhileStatement
%type<str_val> WhileStatementNoShortIf


%%
Identifier:
	IDENTIFIER 										{vec = {createnode("IDENTIFIER", empty)}; $$ = createnode("Identifier", vec);}
	;

Literal:
	LITERAL 										{vec = {createnode("LITERAL", empty)}; $$ = createnode("Literal", vec);}
	;

IntegralType:
	INTEGRALTYPE 										{vec = {createnode("INTEGRALTYPE", empty)}; $$ = createnode("IntegralType", vec);}
	;

FloatingPointType:
	FLOATINGPOINTTYPE 										{vec = {createnode("FLOATINGPOINTTYPE", empty)}; $$ = createnode("FloatingPointType", vec);}
	;

Name:
	Identifier 										{vec = {$1}; $$ = createnode("Name", vec);}
|	Name DOT Identifier 										{vec = {$1,createnode("DOT", empty),$3}; $$ = createnode("Name", vec);}
	;

Names:
	Name 										{vec = {$1}; $$ = createnode("Names", vec);}
|	Names COMMA Name 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("Names", vec);}
	;

CompilationUnit:
	OrdinaryCompilationUnit 										{vec = {$1}; root = createnode("CompilationUnit", vec);}
|	ModularCompilationUnit 										{vec = {$1}; root = createnode("CompilationUnit", vec);}
	;

OrdinaryCompilationUnit:
	PackageDeclaration TopLevelClassOrInterfaceDeclarations 										{vec = {$1,$2}; $$ = createnode("OrdinaryCompilationUnit", vec);}
|	TopLevelClassOrInterfaceDeclarations 										{vec = {$1}; $$ = createnode("OrdinaryCompilationUnit", vec);}
	;

TopLevelClassOrInterfaceDeclarations:
	TopLevelClassOrInterfaceDeclaration 										{vec = {$1}; $$ = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
|	TopLevelClassOrInterfaceDeclarations TopLevelClassOrInterfaceDeclaration 										{vec = {$1,$2}; $$ = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
	;

ModularCompilationUnit:
	ModuleDeclaration 										{vec = {$1}; $$ = createnode("ModularCompilationUnit", vec);}
	;

PackageDeclaration:
	PACKAGE Name SEMICOLON 										{vec = {createnode("PACKAGE", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("PackageDeclaration", vec);}
	;

TopLevelClassOrInterfaceDeclaration:
	ClassDeclaration 										{vec = {$1}; $$ = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
|	SEMICOLON 										{vec = {createnode("SEMICOLON", empty)}; $$ = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
	;

ModuleDeclaration:
	MODULE Name LCB ModuleDirectives RCB 										{vec = {createnode("MODULE", empty),$2,createnode("LCB", empty),$4,createnode("RCB", empty)}; $$ = createnode("ModuleDeclaration", vec);}
	;

ModuleDirectives:
	ModuleDirective 										{vec = {$1}; $$ = createnode("ModuleDirectives", vec);}
|	ModuleDirectives ModuleDirective 										{vec = {$1,$2}; $$ = createnode("ModuleDirectives", vec);}
	;

ModuleDirective:
	REQUIRES RequiresModifiers Name SEMICOLON 										{vec = {createnode("REQUIRES", empty),$2,$3,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	EXPORTS Name TO Names SEMICOLON 										{vec = {createnode("EXPORTS", empty),$2,createnode("TO", empty),$4,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	EXPORTS Name SEMICOLON 										{vec = {createnode("EXPORTS", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	OPENS Name SEMICOLON 										{vec = {createnode("OPENS", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	OPENS Name TO Names SEMICOLON 										{vec = {createnode("OPENS", empty),$2,createnode("TO", empty),$4,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	USES Name SEMICOLON 										{vec = {createnode("USES", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
|	PROVIDES Name WITH Names SEMICOLON 										{vec = {createnode("PROVIDES", empty),$2,createnode("WITH", empty),$4,createnode("SEMICOLON", empty)}; $$ = createnode("ModuleDirective", vec);}
	;

RequiresModifiers:
	RequiresModifier 										{vec = {$1}; $$ = createnode("RequiresModifiers", vec);}
|	RequiresModifiers RequiresModifier 										{vec = {$1,$2}; $$ = createnode("RequiresModifiers", vec);}
	;

RequiresModifier:
	TRANSITIVE 										{vec = {createnode("TRANSITIVE", empty)}; $$ = createnode("RequiresModifier", vec);}
|	STATIC 										{vec = {createnode("STATIC", empty)}; $$ = createnode("RequiresModifier", vec);}
	;

Type:
	PrimitiveType 										{vec = {$1}; $$ = createnode("Type", vec);}
|	ReferenceType 										{vec = {$1}; $$ = createnode("Type", vec);}
	;

PrimitiveType:
	IntegralType 										{vec = {$1}; $$ = createnode("PrimitiveType", vec);}
|	FloatingPointType 										{vec = {$1}; $$ = createnode("PrimitiveType", vec);}
|	BOOLEAN 										{vec = {createnode("BOOLEAN", empty)}; $$ = createnode("PrimitiveType", vec);}
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
	Modifiers CLASS Identifier Super ClassBody 										{vec = {$1,createnode("CLASS", empty),$3,$4,$5}; $$ = createnode("ClassDeclaration", vec);}
|	CLASS Identifier Super ClassBody 										{vec = {createnode("CLASS", empty),$2,$3,$4}; $$ = createnode("ClassDeclaration", vec);}
|	Modifiers CLASS Identifier ClassBody 										{vec = {$1,createnode("CLASS", empty),$3,$4}; $$ = createnode("ClassDeclaration", vec);}
|	CLASS Identifier ClassBody 										{vec = {createnode("CLASS", empty),$2,$3}; $$ = createnode("ClassDeclaration", vec);}
	;

Modifiers:
	Modifier 										{vec = {$1}; $$ = createnode("Modifiers", vec);}
|	Modifiers Modifier 										{vec = {$1,$2}; $$ = createnode("Modifiers", vec);}
	;

Modifier:
	PUBLIC 										{vec = {createnode("PUBLIC", empty)}; $$ = createnode("Modifier", vec);}
|	PROTECTED 										{vec = {createnode("PROTECTED", empty)}; $$ = createnode("Modifier", vec);}
|	PRIVATE 										{vec = {createnode("PRIVATE", empty)}; $$ = createnode("Modifier", vec);}
|	STATIC 										{vec = {createnode("STATIC", empty)}; $$ = createnode("Modifier", vec);}
|	ABSTRACT 										{vec = {createnode("ABSTRACT", empty)}; $$ = createnode("Modifier", vec);}
|	FINAL 										{vec = {createnode("FINAL", empty)}; $$ = createnode("Modifier", vec);}
|	NATIVE 										{vec = {createnode("NATIVE", empty)}; $$ = createnode("Modifier", vec);}
|	SYNCHRONIZED 										{vec = {createnode("SYNCHRONIZED", empty)}; $$ = createnode("Modifier", vec);}
|	TRANSIENT 										{vec = {createnode("TRANSIENT", empty)}; $$ = createnode("Modifier", vec);}
|	VOLATILE 										{vec = {createnode("VOLATILE", empty)}; $$ = createnode("Modifier", vec);}
	;

Super:
	EXTENDS ClassType 										{vec = {createnode("EXTENDS", empty),$2}; $$ = createnode("Super", vec);}
	;

ClassBody:
	LCB RCB 										{vec = {createnode("LCB", empty),createnode("RCB", empty)}; $$ = createnode("ClassBody", vec);}
|	LCB ClassBodyDeclarationRec RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("ClassBody", vec);}
	;

ClassBodyDeclarationRec:
	ClassBodyDeclaration 										{vec = {$1}; $$ = createnode("ClassBodyDeclarationRec", vec);}
|	ClassBodyDeclarationRec ClassBodyDeclaration 										{vec = {$1,$2}; $$ = createnode("ClassBodyDeclarationRec", vec);}
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
	;

FieldDeclaration:
	Modifiers Type VariableDeclarators SEMICOLON 										{vec = {$1,$2,$3,createnode("SEMICOLON", empty)}; $$ = createnode("FieldDeclaration", vec);}
|	Type VariableDeclarators SEMICOLON 										{vec = {$1,$2,createnode("SEMICOLON", empty)}; $$ = createnode("FieldDeclaration", vec);}
	;

VariableDeclarators:
	VariableDeclarator 										{vec = {$1}; $$ = createnode("VariableDeclarators", vec);}
|	VariableDeclarators COMMA VariableDeclarator 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("VariableDeclarators", vec);}
	;

VariableDeclarator:
	VariableDeclaratorId 										{vec = {$1}; $$ = createnode("VariableDeclarator", vec);}
|	VariableDeclaratorId EQUALTO VariableInitializer 										{vec = {$1,createnode("EQUALTO", empty),$3}; $$ = createnode("VariableDeclarator", vec);}
	;

VariableDeclaratorId:
	Identifier 										{vec = {$1}; $$ = createnode("VariableDeclaratorId", vec);}
|	VariableDeclaratorId LSB RSB 										{vec = {$1,createnode("LSB", empty),createnode("RSB", empty)}; $$ = createnode("VariableDeclaratorId", vec);}
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
|	Modifiers VOID MethodDeclarator Throws 										{vec = {$1,createnode("VOID", empty),$3,$4}; $$ = createnode("MethodHeader", vec);}
|	VOID MethodDeclarator Throws 										{vec = {createnode("VOID", empty),$2,$3}; $$ = createnode("MethodHeader", vec);}
|	Modifiers VOID MethodDeclarator 										{vec = {$1,createnode("VOID", empty),$3}; $$ = createnode("MethodHeader", vec);}
|	VOID MethodDeclarator 										{vec = {createnode("VOID", empty),$2}; $$ = createnode("MethodHeader", vec);}
	;

MethodDeclarator:
	Identifier LRB FormalParameterList RRB 										{vec = {$1,createnode("LRB", empty),$3,createnode("RRB", empty)}; $$ = createnode("MethodDeclarator", vec);}
|	Identifier LRB RRB 										{vec = {$1,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("MethodDeclarator", vec);}
|	MethodDeclarator LSB RSB 										{vec = {$1,createnode("LSB", empty),createnode("RSB", empty)}; $$ = createnode("MethodDeclarator", vec);}
	;

FormalParameterList:
	FormalParameter 										{vec = {$1}; $$ = createnode("FormalParameterList", vec);}
|	FormalParameterList COMMA FormalParameter 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("FormalParameterList", vec);}
	;

FormalParameter:
	Type VariableDeclaratorId 										{vec = {$1,$2}; $$ = createnode("FormalParameter", vec);}
	;

Throws:
	THROWS ClassTypeList 										{vec = {createnode("THROWS", empty),$2}; $$ = createnode("Throws", vec);}
	;

ClassTypeList:
	ClassType 										{vec = {$1}; $$ = createnode("ClassTypeList", vec);}
|	ClassTypeList COMMA ClassType 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("ClassTypeList", vec);}
	;

MethodBody:
	Block 										{vec = {$1}; $$ = createnode("MethodBody", vec);}
|	SEMICOLON 										{vec = {createnode("SEMICOLON", empty)}; $$ = createnode("MethodBody", vec);}
	;

InstanceInitializer:
	Block 										{vec = {$1}; $$ = createnode("InstanceInitializer", vec);}
	;

StaticInitializer:
	STATIC Block 										{vec = {createnode("STATIC", empty),$2}; $$ = createnode("StaticInitializer", vec);}
	;

ConstructorDeclaration:
	Modifiers ConstructorDeclarator Throws ConstructorBody 										{vec = {$1,$2,$3,$4}; $$ = createnode("ConstructorDeclaration", vec);}
|	ConstructorDeclarator Throws ConstructorBody 										{vec = {$1,$2,$3}; $$ = createnode("ConstructorDeclaration", vec);}
|	Modifiers ConstructorDeclarator ConstructorBody 										{vec = {$1,$2,$3}; $$ = createnode("ConstructorDeclaration", vec);}
|	ConstructorDeclarator ConstructorBody 										{vec = {$1,$2}; $$ = createnode("ConstructorDeclaration", vec);}
	;

ConstructorDeclarator:
	Identifier LRB FormalParameterList RRB 										{vec = {$1,createnode("LRB", empty),$3,createnode("RRB", empty)}; $$ = createnode("ConstructorDeclarator", vec);}
|	Identifier LRB RRB 										{vec = {$1,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("ConstructorDeclarator", vec);}
	;

ConstructorBody:
	LCB ExplicitConstructorInvocation BlockStatements RCB 										{vec = {createnode("LCB", empty),$2,$3,createnode("RCB", empty)}; $$ = createnode("ConstructorBody", vec);}
|	LCB BlockStatements RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("ConstructorBody", vec);}
|	LCB ExplicitConstructorInvocation RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("ConstructorBody", vec);}
|	LCB RCB 										{vec = {createnode("LCB", empty),createnode("RCB", empty)}; $$ = createnode("ConstructorBody", vec);}
	;

ExplicitConstructorInvocation:
	THIS LRB ArgumentList RRB SEMICOLON 										{vec = {createnode("THIS", empty),createnode("LRB", empty),$3,createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	THIS LRB RRB SEMICOLON 										{vec = {createnode("THIS", empty),createnode("LRB", empty),createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {createnode("SUPER", empty),createnode("LRB", empty),$3,createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	SUPER LRB RRB SEMICOLON 										{vec = {createnode("SUPER", empty),createnode("LRB", empty),createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Name DOT SUPER LRB RRB SEMICOLON 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("LRB", empty),createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Name DOT SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("LRB", empty),$5,createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Primary DOT SUPER LRB RRB SEMICOLON 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("LRB", empty),createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
|	Primary DOT SUPER LRB ArgumentList RRB SEMICOLON 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("LRB", empty),$5,createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ExplicitConstructorInvocation", vec);}
	;

ArrayInitializer:
	LCB RCB 										{vec = {createnode("LCB", empty),createnode("RCB", empty)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB VariableInitializerList RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB COMMA RCB 										{vec = {createnode("LCB", empty),createnode("COMMA", empty),createnode("RCB", empty)}; $$ = createnode("ArrayInitializer", vec);}
|	LCB VariableInitializerList COMMA RCB 										{vec = {createnode("LCB", empty),$2,createnode("COMMA", empty),createnode("RCB", empty)}; $$ = createnode("ArrayInitializer", vec);}
	;

VariableInitializerList:
	VariableInitializer 										{vec = {$1}; $$ = createnode("VariableInitializerList", vec);}
|	VariableInitializerList COMMA VariableInitializer 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("VariableInitializerList", vec);}
	;

Block:
	LCB BlockStatements RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("Block", vec);}
|	LCB RCB 										{vec = {createnode("LCB", empty),createnode("RCB", empty)}; $$ = createnode("Block", vec);}
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
	LocalVariableDeclaration SEMICOLON 										{vec = {$1,createnode("SEMICOLON", empty)}; $$ = createnode("LocalVariableDeclarationStatement", vec);}
	;

LocalVariableDeclaration:
	Type VariableDeclarators 										{vec = {$1,$2}; $$ = createnode("LocalVariableDeclaration", vec);}
|	VAR VariableDeclarators 										{vec = {createnode("VAR", empty),$2}; $$ = createnode("LocalVariableDeclaration", vec);}
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
	ASSERT Expression SEMICOLON 										{vec = {createnode("ASSERT", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("AssertStatement", vec);}
|	ASSERT Expression COLON Expression SEMICOLON 										{vec = {createnode("ASSERT", empty),$2,createnode("COLON", empty),$4,createnode("SEMICOLON", empty)}; $$ = createnode("AssertStatement", vec);}
	;

EmptyStatement:
	SEMICOLON 										{vec = {createnode("SEMICOLON", empty)}; $$ = createnode("EmptyStatement", vec);}
	;

LabeledStatement:
	Identifier COLON Statement 										{vec = {$1,createnode("COLON", empty),$3}; $$ = createnode("LabeledStatement", vec);}
	;

LabeledStatementNoShortIf:
	Identifier COLON StatementNoShortIf 										{vec = {$1,createnode("COLON", empty),$3}; $$ = createnode("LabeledStatementNoShortIf", vec);}
	;

ExpressionStatement:
	StatementExpression SEMICOLON 										{vec = {$1,createnode("SEMICOLON", empty)}; $$ = createnode("ExpressionStatement", vec);}
	;

StatementExpression:
	Assignment 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PreIncrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PreDecrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	PostIncrementExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	MethodInvocation 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
|	ClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("StatementExpression", vec);}
	;

IfThenStatement:
	IF LRB Expression RRB Statement 										{vec = {createnode("IF", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5}; $$ = createnode("IfThenStatement", vec);}
	;

IfThenElseStatement:
	IF LRB Expression RRB StatementNoShortIf ELSE Statement 										{vec = {createnode("IF", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5,createnode("ELSE", empty),$7}; $$ = createnode("IfThenElseStatement", vec);}
	;

IfThenElseStatementNoShortIf:
	IF LRB Expression RRB StatementNoShortIf ELSE StatementNoShortIf 										{vec = {createnode("IF", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5,createnode("ELSE", empty),$7}; $$ = createnode("IfThenElseStatementNoShortIf", vec);}
	;

SwitchStatement:
	SWITCH LRB Expression RRB SwitchBlock 										{vec = {createnode("SWITCH", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5}; $$ = createnode("SwitchStatement", vec);}
	;

SwitchBlock:
	LCB SwitchBlockStatementGroups SwitchLabels RCB 										{vec = {createnode("LCB", empty),$2,$3,createnode("RCB", empty)}; $$ = createnode("SwitchBlock", vec);}
|	LCB SwitchLabels RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("SwitchBlock", vec);}
|	LCB SwitchBlockStatementGroups RCB 										{vec = {createnode("LCB", empty),$2,createnode("RCB", empty)}; $$ = createnode("SwitchBlock", vec);}
|	LCB RCB 										{vec = {createnode("LCB", empty),createnode("RCB", empty)}; $$ = createnode("SwitchBlock", vec);}
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
	CASE CaseConstants COLON 										{vec = {createnode("CASE", empty),$2,createnode("COLON", empty)}; $$ = createnode("SwitchLabel", vec);}
|	DEFAULT COLON 										{vec = {createnode("DEFAULT", empty),createnode("COLON", empty)}; $$ = createnode("SwitchLabel", vec);}
	;

CaseConstants:
	ConditionalExpression 										{vec = {$1}; $$ = createnode("CaseConstants", vec);}
|	CaseConstants COMMA ConditionalExpression 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("CaseConstants", vec);}
	;

WhileStatement:
	WHILE LRB Expression RRB Statement 										{vec = {createnode("WHILE", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5}; $$ = createnode("WhileStatement", vec);}
	;

WhileStatementNoShortIf:
	WHILE LRB Expression RRB StatementNoShortIf 										{vec = {createnode("WHILE", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5}; $$ = createnode("WhileStatementNoShortIf", vec);}
	;

DoStatement:
	DO Statement WHILE LRB Expression RRB SEMICOLON 										{vec = {createnode("DO", empty),$2,createnode("WHILE", empty),createnode("LRB", empty),$5,createnode("RRB", empty),createnode("SEMICOLON", empty)}; $$ = createnode("DoStatement", vec);}
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
	FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),$5,createnode("SEMICOLON", empty),$7,createnode("RRB", empty),$9}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),$4,createnode("SEMICOLON", empty),$6,createnode("RRB", empty),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),$6,createnode("RRB", empty),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON SEMICOLON ForUpdate RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),$5,createnode("RRB", empty),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),$5,createnode("SEMICOLON", empty),createnode("RRB", empty),$8}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),$4,createnode("SEMICOLON", empty),createnode("RRB", empty),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),createnode("RRB", empty),$7}; $$ = createnode("BasicForStatement", vec);}
|	FOR LRB SEMICOLON SEMICOLON RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),createnode("RRB", empty),$6}; $$ = createnode("BasicForStatement", vec);}
	;

BasicForStatementNoShortIf:
	FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),$5,createnode("SEMICOLON", empty),$7,createnode("RRB", empty),$9}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),$4,createnode("SEMICOLON", empty),$6,createnode("RRB", empty),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),$6,createnode("RRB", empty),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),$5,createnode("RRB", empty),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),$5,createnode("SEMICOLON", empty),createnode("RRB", empty),$8}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),$4,createnode("SEMICOLON", empty),createnode("RRB", empty),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB ForInit SEMICOLON SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),createnode("RRB", empty),$7}; $$ = createnode("BasicForStatementNoShortIf", vec);}
|	FOR LRB SEMICOLON SEMICOLON RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),createnode("SEMICOLON", empty),createnode("SEMICOLON", empty),createnode("RRB", empty),$6}; $$ = createnode("BasicForStatementNoShortIf", vec);}
	;

ForInit:
	StatementExpressionList 										{vec = {$1}; $$ = createnode("ForInit", vec);}
|	LocalVariableDeclaration 										{vec = {$1}; $$ = createnode("ForInit", vec);}
	;

ForUpdate:
	StatementExpressionList 										{vec = {$1}; $$ = createnode("ForUpdate", vec);}
	;

StatementExpressionList:
	StatementExpressionList COMMA StatementExpression 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("StatementExpressionList", vec);}
|	StatementExpression 										{vec = {$1}; $$ = createnode("StatementExpressionList", vec);}
	;

EnhancedForStatement:
	FOR LRB LocalVariableDeclaration COLON Expression RRB Statement 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("COLON", empty),$5,createnode("RRB", empty),$7}; $$ = createnode("EnhancedForStatement", vec);}
	;

EnhancedForStatementNoShortIf:
	FOR LRB LocalVariableDeclaration COLON Expression RRB StatementNoShortIf 										{vec = {createnode("FOR", empty),createnode("LRB", empty),$3,createnode("COLON", empty),$5,createnode("RRB", empty),$7}; $$ = createnode("EnhancedForStatementNoShortIf", vec);}
	;

BreakStatement:
	BREAK Identifier SEMICOLON 										{vec = {createnode("BREAK", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("BreakStatement", vec);}
|	BREAK SEMICOLON 										{vec = {createnode("BREAK", empty),createnode("SEMICOLON", empty)}; $$ = createnode("BreakStatement", vec);}
	;

ContinueStatement:
	CONTINUE Identifier SEMICOLON 										{vec = {createnode("CONTINUE", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ContinueStatement", vec);}
|	CONTINUE SEMICOLON 										{vec = {createnode("CONTINUE", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ContinueStatement", vec);}
	;

ReturnStatement:
	RETURN SEMICOLON 										{vec = {createnode("RETURN", empty),createnode("SEMICOLON", empty)}; $$ = createnode("ReturnStatement", vec);}
|	RETURN Expression SEMICOLON 										{vec = {createnode("RETURN", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ReturnStatement", vec);}
	;

ThrowStatement:
	THROW Expression SEMICOLON 										{vec = {createnode("THROW", empty),$2,createnode("SEMICOLON", empty)}; $$ = createnode("ThrowStatement", vec);}
	;

SynchronizedStatement:
	SYNCHRONIZED LRB Expression RRB Block 										{vec = {createnode("SYNCHRONIZED", empty),createnode("LRB", empty),$3,createnode("RRB", empty),$5}; $$ = createnode("SynchronizedStatement", vec);}
	;

TryStatement:
	TRY Block Catches 										{vec = {createnode("TRY", empty),$2,$3}; $$ = createnode("TryStatement", vec);}
|	TRY Block Finally 										{vec = {createnode("TRY", empty),$2,$3}; $$ = createnode("TryStatement", vec);}
|	TRY Block Catches Finally 										{vec = {createnode("TRY", empty),$2,$3,$4}; $$ = createnode("TryStatement", vec);}
	;

Catches:
	Catches CatchClause 										{vec = {$1,$2}; $$ = createnode("Catches", vec);}
|	CatchClause 										{vec = {$1}; $$ = createnode("Catches", vec);}
	;

CatchClause:
	CATCH LRB CatchType VariableDeclaratorId RRB Block 										{vec = {createnode("CATCH", empty),createnode("LRB", empty),$3,$4,createnode("RRB", empty),$6}; $$ = createnode("CatchClause", vec);}
	;

CatchType:
	Name 										{vec = {$1}; $$ = createnode("CatchType", vec);}
|	Name CatchTypes 										{vec = {$1,$2}; $$ = createnode("CatchType", vec);}
	;

CatchTypes:
	BITOR ClassType 										{vec = {createnode("BITOR", empty),$2}; $$ = createnode("CatchTypes", vec);}
|	CatchTypes BITOR CatchType 										{vec = {$1,createnode("BITOR", empty),$3}; $$ = createnode("CatchTypes", vec);}
	;

Finally:
	FINALLY Block 										{vec = {createnode("FINALLY", empty),$2}; $$ = createnode("Finally", vec);}
	;

Primary:
	PrimaryNoNewArray 										{vec = {$1}; $$ = createnode("Primary", vec);}
|	ArrayCreationExpression 										{vec = {$1}; $$ = createnode("Primary", vec);}
	;

PrimaryNoNewArray:
	Literal 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	THIS 										{vec = {createnode("THIS", empty)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	Name DOT THIS 										{vec = {$1,createnode("DOT", empty),createnode("THIS", empty)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	LRB Expression RRB 										{vec = {createnode("LRB", empty),$2,createnode("RRB", empty)}; $$ = createnode("PrimaryNoNewArray", vec);}
|	ClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	FieldAccess 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	ArrayAccess 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
|	MethodInvocation 										{vec = {$1}; $$ = createnode("PrimaryNoNewArray", vec);}
	;

ClassInstanceCreationExpression:
	UnqualifiedClassInstanceCreationExpression 										{vec = {$1}; $$ = createnode("ClassInstanceCreationExpression", vec);}
|	Name DOT UnqualifiedClassInstanceCreationExpression 										{vec = {$1,createnode("DOT", empty),$3}; $$ = createnode("ClassInstanceCreationExpression", vec);}
|	Primary DOT UnqualifiedClassInstanceCreationExpression 										{vec = {$1,createnode("DOT", empty),$3}; $$ = createnode("ClassInstanceCreationExpression", vec);}
	;

UnqualifiedClassInstanceCreationExpression:
	NEW ClassOrInterfaceType LRB ArgumentList RRB 										{vec = {createnode("NEW", empty),$2,createnode("LRB", empty),$4,createnode("RRB", empty)}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
|	NEW ClassOrInterfaceType LRB RRB 										{vec = {createnode("NEW", empty),$2,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
	;

FieldAccess:
	Primary DOT Identifier 										{vec = {$1,createnode("DOT", empty),$3}; $$ = createnode("FieldAccess", vec);}
|	SUPER DOT Identifier 										{vec = {createnode("SUPER", empty),createnode("DOT", empty),$3}; $$ = createnode("FieldAccess", vec);}
|	Name DOT Identifier 										{vec = {$1,createnode("DOT", empty),$3}; $$ = createnode("FieldAccess", vec);}
	;

ArrayAccess:
	Name LSB Expression RSB 										{vec = {$1,createnode("LSB", empty),$3,createnode("RSB", empty)}; $$ = createnode("ArrayAccess", vec);}
|	PrimaryNoNewArray LSB Expression RSB 										{vec = {$1,createnode("LSB", empty),$3,createnode("RSB", empty)}; $$ = createnode("ArrayAccess", vec);}
	;

MethodInvocation:
	Name LRB RSB 										{vec = {$1,createnode("LRB", empty),createnode("RSB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	Name LRB ArgumentList RRB 										{vec = {$1,createnode("LRB", empty),$3,createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	Primary DOT Identifier LRB RRB 										{vec = {$1,createnode("DOT", empty),$3,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	Primary DOT Identifier LRB ArgumentList RRB 										{vec = {$1,createnode("DOT", empty),$3,createnode("LRB", empty),$5,createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	SUPER DOT Identifier LRB RRB 										{vec = {createnode("SUPER", empty),createnode("DOT", empty),$3,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	Name DOT SUPER DOT Identifier LRB RRB 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("DOT", empty),$5,createnode("LRB", empty),createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
|	Name DOT SUPER DOT Identifier LRB ArgumentList RRB 										{vec = {$1,createnode("DOT", empty),createnode("SUPER", empty),createnode("DOT", empty),$5,createnode("LRB", empty),$7,createnode("RRB", empty)}; $$ = createnode("MethodInvocation", vec);}
	;

ArgumentList:
	Expression 										{vec = {$1}; $$ = createnode("ArgumentList", vec);}
|	ArgumentList COMMA Expression 										{vec = {$1,createnode("COMMA", empty),$3}; $$ = createnode("ArgumentList", vec);}
	;

ArrayCreationExpression:
	NEW PrimitiveType DimExprs 										{vec = {createnode("NEW", empty),$2,$3}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW PrimitiveType DimExprs Dims 										{vec = {createnode("NEW", empty),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType DimExprs 										{vec = {createnode("NEW", empty),$2,$3}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType DimExprs Dims 										{vec = {createnode("NEW", empty),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW PrimitiveType Dims ArrayInitializer 										{vec = {createnode("NEW", empty),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
|	NEW ClassOrInterfaceType Dims ArrayInitializer 										{vec = {createnode("NEW", empty),$2,$3,$4}; $$ = createnode("ArrayCreationExpression", vec);}
	;

DimExprs:
	DimExprs DimExpr 										{vec = {$1,$2}; $$ = createnode("DimExprs", vec);}
|	DimExpr 										{vec = {$1}; $$ = createnode("DimExprs", vec);}
	;

DimExpr:
	LSB Expression RSB 										{vec = {createnode("LSB", empty),$2,createnode("RSB", empty)}; $$ = createnode("DimExpr", vec);}
	;

Dims:
	LSB RSB 										{vec = {createnode("LSB", empty),createnode("RSB", empty)}; $$ = createnode("Dims", vec);}
|	Dims LSB RSB 										{vec = {$1,createnode("LSB", empty),createnode("RSB", empty)}; $$ = createnode("Dims", vec);}
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
	EQUALTO 										{vec = {createnode("EQUALTO", empty)}; $$ = createnode("AssignmentOperator", vec);}
|	PLUSET 										{vec = {createnode("PLUSET", empty)}; $$ = createnode("AssignmentOperator", vec);}
|	MINUSET 										{vec = {createnode("MINUSET", empty)}; $$ = createnode("AssignmentOperator", vec);}
|	MULTET 										{vec = {createnode("MULTET", empty)}; $$ = createnode("AssignmentOperator", vec);}
|	DIVET 										{vec = {createnode("DIVET", empty)}; $$ = createnode("AssignmentOperator", vec);}
|	ANDET 										{vec = {createnode("ANDET", empty)}; $$ = createnode("AssignmentOperator", vec);}
	;

ConditionalExpression:
	ConditionalOrExpression 										{vec = {$1}; $$ = createnode("ConditionalExpression", vec);}
|	ConditionalOrExpression QUEST Expression COLON ConditionalExpression 										{vec = {$1,createnode("QUEST", empty),$3,createnode("COLON", empty),$5}; $$ = createnode("ConditionalExpression", vec);}
	;

ConditionalOrExpression:
	ConditionalAndExpression 										{vec = {$1}; $$ = createnode("ConditionalOrExpression", vec);}
|	ConditionalOrExpression OR ConditionalAndExpression 										{vec = {$1,createnode("OR", empty),$3}; $$ = createnode("ConditionalOrExpression", vec);}
	;

ConditionalAndExpression:
	InclusiveOrExpression 										{vec = {$1}; $$ = createnode("ConditionalAndExpression", vec);}
|	ConditionalAndExpression AND InclusiveOrExpression 										{vec = {$1,createnode("AND", empty),$3}; $$ = createnode("ConditionalAndExpression", vec);}
	;

InclusiveOrExpression:
	ExclusiveOrExpression 										{vec = {$1}; $$ = createnode("InclusiveOrExpression", vec);}
|	InclusiveOrExpression BITOR ExclusiveOrExpression 										{vec = {$1,createnode("BITOR", empty),$3}; $$ = createnode("InclusiveOrExpression", vec);}
	;

ExclusiveOrExpression:
	AndExpression 										{vec = {$1}; $$ = createnode("ExclusiveOrExpression", vec);}
|	ExclusiveOrExpression POW AndExpression 										{vec = {$1,createnode("POW", empty),$3}; $$ = createnode("ExclusiveOrExpression", vec);}
	;

AndExpression:
	EqualityExpression 										{vec = {$1}; $$ = createnode("AndExpression", vec);}
|	AndExpression BITAND EqualityExpression 										{vec = {$1,createnode("BITAND", empty),$3}; $$ = createnode("AndExpression", vec);}
	;

EqualityExpression:
	RelationalExpression 										{vec = {$1}; $$ = createnode("EqualityExpression", vec);}
|	EqualityExpression EQ RelationalExpression 										{vec = {$1,createnode("EQ", empty),$3}; $$ = createnode("EqualityExpression", vec);}
|	EqualityExpression NEQ RelationalExpression 										{vec = {$1,createnode("NEQ", empty),$3}; $$ = createnode("EqualityExpression", vec);}
	;

RelationalExpression:
	ShiftExpression 										{vec = {$1}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression LT ShiftExpression 										{vec = {$1,createnode("LT", empty),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression GT ShiftExpression 										{vec = {$1,createnode("GT", empty),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression LEQ ShiftExpression 										{vec = {$1,createnode("LEQ", empty),$3}; $$ = createnode("RelationalExpression", vec);}
|	RelationalExpression GEQ ShiftExpression 										{vec = {$1,createnode("GEQ", empty),$3}; $$ = createnode("RelationalExpression", vec);}
|	InstanceofExpression 										{vec = {$1}; $$ = createnode("RelationalExpression", vec);}
	;

InstanceofExpression:
	RelationalExpression INSTANCEOF ReferenceType 										{vec = {$1,createnode("INSTANCEOF", empty),$3}; $$ = createnode("InstanceofExpression", vec);}
	;

ShiftExpression:
	AdditiveExpression 										{vec = {$1}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression LEFTSHIFT AdditiveExpression 										{vec = {$1,createnode("LEFTSHIFT", empty),$3}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression RIGHTSHIFT AdditiveExpression 										{vec = {$1,createnode("RIGHTSHIFT", empty),$3}; $$ = createnode("ShiftExpression", vec);}
|	ShiftExpression THREEGREAT AdditiveExpression 										{vec = {$1,createnode("THREEGREAT", empty),$3}; $$ = createnode("ShiftExpression", vec);}
	;

AdditiveExpression:
	MultiplicativeExpression 										{vec = {$1}; $$ = createnode("AdditiveExpression", vec);}
|	AdditiveExpression PLUS MultiplicativeExpression 										{vec = {$1,createnode("PLUS", empty),$3}; $$ = createnode("AdditiveExpression", vec);}
|	AdditiveExpression MINUS MultiplicativeExpression 										{vec = {$1,createnode("MINUS", empty),$3}; $$ = createnode("AdditiveExpression", vec);}
	;

MultiplicativeExpression:
	UnaryExpression 										{vec = {$1}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression MULT UnaryExpression 										{vec = {$1,createnode("MULT", empty),$3}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression DIVIDE UnaryExpression 										{vec = {$1,createnode("DIVIDE", empty),$3}; $$ = createnode("MultiplicativeExpression", vec);}
|	MultiplicativeExpression MODULO UnaryExpression 										{vec = {$1,createnode("MODULO", empty),$3}; $$ = createnode("MultiplicativeExpression", vec);}
	;

UnaryExpression:
	PreIncrementExpression 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
|	PreDecrementExpression 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
|	PLUS UnaryExpression 										{vec = {createnode("PLUS", empty),$2}; $$ = createnode("UnaryExpression", vec);}
|	MINUS UnaryExpression 										{vec = {createnode("MINUS", empty),$2}; $$ = createnode("UnaryExpression", vec);}
|	UnaryExpressionNotPlusMinus 										{vec = {$1}; $$ = createnode("UnaryExpression", vec);}
	;

PreIncrementExpression:
	INCREMENT UnaryExpression 										{vec = {createnode("INCREMENT", empty),$2}; $$ = createnode("PreIncrementExpression", vec);}
	;

PreDecrementExpression:
	DECREMENT UnaryExpression 										{vec = {createnode("DECREMENT", empty),$2}; $$ = createnode("PreDecrementExpression", vec);}
	;

UnaryExpressionNotPlusMinus:
	PostfixExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	TILDE UnaryExpression 										{vec = {createnode("TILDE", empty),$2}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	NOT UnaryExpression 										{vec = {createnode("NOT", empty),$2}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	CastExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
|	SwitchExpression 										{vec = {$1}; $$ = createnode("UnaryExpressionNotPlusMinus", vec);}
	;

PostfixExpression:
	Primary 										{vec = {$1}; $$ = createnode("PostfixExpression", vec);}
|	PostIncrementExpression 										{vec = {$1}; $$ = createnode("PostfixExpression", vec);}
	;

PostIncrementExpression:
	PostfixExpression INCREMENT 										{vec = {$1,createnode("INCREMENT", empty)}; $$ = createnode("PostIncrementExpression", vec);}
|	PostfixExpression DECREMENT 										{vec = {$1,createnode("DECREMENT", empty)}; $$ = createnode("PostIncrementExpression", vec);}
	;

CastExpression:
	LSB PrimitiveType RSB UnaryExpression 										{vec = {createnode("LSB", empty),$2,createnode("RSB", empty),$4}; $$ = createnode("CastExpression", vec);}
|	LSB ReferenceType RSB UnaryExpressionNotPlusMinus 										{vec = {createnode("LSB", empty),$2,createnode("RSB", empty),$4}; $$ = createnode("CastExpression", vec);}
	;

SwitchExpression:
	SWITCH LSB Expression RSB SwitchBlock 										{vec = {createnode("SWITCH", empty),createnode("LSB", empty),$3,createnode("RSB", empty),$5}; $$ = createnode("SwitchExpression", vec);}
	;

%%

void dfs(Node* root){
    for(auto child:root->children){
        cout<<(root->val)<<"->"<<(child->val)<<'\n';
    }cout<<'\n';
    for(auto child:root->children){
        dfs(child);
    }
}

int main(){
    freopen("temp1.java", "r", stdin);
    freopen("pout.txt", "w", stdout);
    yyparse();
    dfs(root);
    return 0;
}