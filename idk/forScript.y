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
%}


%union{
    string str_val;
}

%start CompilationUnit

%token<str_val> IDENTIFIER 
%token<str_val> LITERAL 
%token<str_val> INTEGRALTYPE 
%token<str_val> FLOATINGPOINTTYPE 
%token<str_val> DOT 
%token<str_val> COMMA 
%token<str_val> PACKAGE 
%token<str_val> SEMICOLON 
%token<str_val> MODULE 
%token<str_val> LCB 
%token<str_val> RCB 
%token<str_val> REQUIRES 
%token<str_val> EXPORTS 
%token<str_val> OPENS 
%token<str_val> TO 
%token<str_val> USES 
%token<str_val> PROVIDES 
%token<str_val> WITH 
%token<str_val> TRANSITIVE 
%token<str_val> STATIC 
%token<str_val> BOOLEAN
%token<str_val> CLASS
%token<str_val> PUBLIC
%token<str_val> PROTECTED
%token<str_val> PRIVATE
%token<str_val> ABSTRACT
%token<str_val> FINAL
%token<str_val> NATIVE
%token<str_val> SYNCHRONIZED
%token<str_val> TRANSIENT
%token<str_val> VOLATILE
%token<str_val> EXTENDS
%token<str_val> EQUALTO
%token<str_val> PLUSET
%token<str_val> MINUSET
%token<str_val> MULTET
%token<str_val> DIVET
%token<str_val> ANDET
%token<str_val> LSB
%token<str_val> RSB
%token<str_val> VOID
%token<str_val> LRB
%token<str_val> RRB
%token<str_val> THROWS
%token<str_val> THIS
%token<str_val> SUPER
%token<str_val> VAR
%token<str_val> ASSERT
%token<str_val> COLON
%token<str_val> IF
%token<str_val> ELSE
%token<str_val> SWITCH
%token<str_val> CASE
%token<str_val> DEFAULT
%token<str_val> WHILE
%token<str_val> DO
%token<str_val> FOR
%token<str_val> BREAK
%token<str_val> CONTINUE
%token<str_val> RETURN
%token<str_val> THROW
%token<str_val> TRY
%token<str_val> CATCH
%token<str_val> FINALLY
%token<str_val> NEW
%token<str_val> QUEST
%token<str_val> OR
%token<str_val> AND
%token<str_val> BITOR
%token<str_val> BITAND
%token<str_val> POW
%token<str_val> EQ
%token<str_val> NEQ
%token<str_val> LT
%token<str_val> GT
%token<str_val> LEQ
%token<str_val> GEQ
%token<str_val> LEFTSHIFT
%token<str_val> RIGHTSHIFT
%token<str_val> THREEGREAT
%token<str_val> PLUS
%token<str_val> MINUS
%token<str_val> MULT
%token<str_val> DIVIDE
%token<str_val> MODULO
%token<str_val> INCREMENT
%token<str_val> DECREMENT
%token<str_val> TILDE
%token<str_val> NOT
%token<str_val> INSTANCEOF

%type<str_val> Identifier
%type<str_val> Literal
%type<str_val> IntegralType
%type<str_val> FloatingPointType
%type<str_val> Name
%type<str_val> Names
%type<str_val> CompilationUnit
%type<str_val> OrdinaryCompilationUnit
%type<str_val> TopLevelClassOrInterfaceDeclarations
%type<str_val> ModularCompilationUnit
%type<str_val> PackageDeclaration
%type<str_val> TopLevelClassOrInterfaceDeclaration
%type<str_val> ModuleDeclaration
%type<str_val> ModuleDirectives
%type<str_val> ModuleDirective
%type<str_val> RequiresModifiers
%type<str_val> RequiresModifier
%type<str_val> Type
%type<str_val> PrimitiveType
%type<str_val> ReferenceType
%type<str_val> ArrayType
%type<str_val> ClassOrInterfaceType
%type<str_val> ClassType
%type<str_val> ClassDeclaration
%type<str_val> Modifiers
%type<str_val> Modifier
%type<str_val> Super
%type<str_val> ClassBody
%type<str_val> ClassBodyDeclarationRec
%type<str_val> ClassBodyDeclaration
%type<str_val> ClassMemberDeclaration
%type<str_val> FieldDeclaration
%type<str_val> VariableDeclarators
%type<str_val> VariableDeclarator
%type<str_val> VariableDeclaratorId
%type<str_val> VariableInitializer
%type<str_val> MethodDeclaration
%type<str_val> MethodHeader
%type<str_val> MethodDeclarator
%type<str_val> FormalParameterList
%type<str_val> FormalParameter
%type<str_val> Throws
%type<str_val> ClassTypeList
%type<str_val> MethodBody
%type<str_val> InstanceInitializer
%type<str_val> StaticInitializer
%type<str_val> ConstructorDeclaration
%type<str_val> ConstructorDeclarator
%type<str_val> ConstructorBody
%type<str_val> ExplicitConstructorInvocation
%type<str_val> ArrayInitializer
%type<str_val> VariableInitializerList
%type<str_val> Block
%type<str_val> BlockStatements
%type<str_val> BlockStatement
%type<str_val> LocalVariableDeclarationStatement
%type<str_val> LocalVariableDeclaration
%type<str_val> Statement
%type<str_val> StatementNoShortIf
%type<str_val> StatementWithoutTrailingSubstatement
%type<str_val> AssertStatement
%type<str_val> EmptyStatement
%type<str_val> LabeledStatement
%type<str_val> LabeledStatementNoShortIf
%type<str_val> ExpressionStatement
%type<str_val> StatementExpression
%type<str_val> IfThenStatement
%type<str_val> IfThenElseStatement
%type<str_val> IfThenElseStatementNoShortIf
%type<str_val> SwitchStatement
%type<str_val> SwitchBlock
%type<str_val> SwitchBlockStatementGroups
%type<str_val> SwitchLabels
%type<str_val> SwitchBlockStatementGroup
%type<str_val> SwitchLabel
%type<str_val> CaseConstants
%type<str_val> WhileStatement
%type<str_val> WhileStatementNoShortIf
%type<str_val> DoStatement
%type<str_val> ForStatement
%type<str_val> ForStatementNoShortIf
%type<str_val> BasicForStatement
%type<str_val> BasicForStatementNoShortIf
%type<str_val> ForInit
%type<str_val> ForUpdate
%type<str_val> StatementExpressionList
%type<str_val> EnhancedForStatement
%type<str_val> EnhancedForStatementNoShortIf
%type<str_val> BreakStatement
%type<str_val> ContinueStatement
%type<str_val> ReturnStatement
%type<str_val> ThrowStatement
%type<str_val> SynchronizedStatement
%type<str_val> TryStatement
%type<str_val> Catches
%type<str_val> CatchClause
%type<str_val> CatchType
%type<str_val> CatchTypes
%type<str_val> Finally
%type<str_val> Primary
%type<str_val> PrimaryNoNewArray
%type<str_val> ClassInstanceCreationExpression
%type<str_val> UnqualifiedClassInstanceCreationExpression
%type<str_val> FieldAccess
%type<str_val> ArrayAccess
%type<str_val> MethodInvocation
%type<str_val> ArgumentList
%type<str_val> ArrayCreationExpression
%type<str_val> DimExprs
%type<str_val> DimExpr
%type<str_val> Dims
%type<str_val> Expression
%type<str_val> AssignmentExpression
%type<str_val> Assignment
%type<str_val> LeftHandSide
%type<str_val> AssignmentOperator
%type<str_val> ConditionalExpression
%type<str_val> ConditionalOrExpression
%type<str_val> ConditionalAndExpression
%type<str_val> InclusiveOrExpression
%type<str_val> ExclusiveOrExpression
%type<str_val> AndExpression
%type<str_val> EqualityExpression
%type<str_val> RelationalExpression
%type<str_val> InstanceofExpression
%type<str_val> ShiftExpression
%type<str_val> AdditiveExpression
%type<str_val> MultiplicativeExpression
%type<str_val> UnaryExpression
%type<str_val> PreIncrementExpression
%type<str_val> PreDecrementExpression
%type<str_val> UnaryExpressionNotPlusMinus
%type<str_val> PostfixExpression
%type<str_val> PostIncrementExpression
%type<str_val> CastExpression
%type<str_val> SwitchExpression


%%

//---------------Basic------------------------------
Identifier  EOL
IDENTIFIER EOL
END EOL
Literal EOL
LITERAL EOL
END EOL
IntegralType EOL
INTEGRALTYPE EOL
END EOL
FloatingPointType EOL
FLOATINGPOINTTYPE EOL
END EOL
Name EOL
Identifier EOL
Name DOT Identifier EOL
END EOL
Names EOL
Name EOL
Names COMMA Name EOL
END EOL
CompilationUnit EOL
OrdinaryCompilationUnit EOL
ModularCompilationUnit EOL
END EOL
OrdinaryCompilationUnit EOL
PackageDeclaration TopLevelClassOrInterfaceDeclarations EOL
TopLevelClassOrInterfaceDeclarations EOL
END EOL
TopLevelClassOrInterfaceDeclarations EOL
TopLevelClassOrInterfaceDeclaration EOL
TopLevelClassOrInterfaceDeclarations TopLevelClassOrInterfaceDeclaration EOL
END EOL
ModularCompilationUnit EOL
ModuleDeclaration EOL
END EOL
PackageDeclaration EOL
PACKAGE Name SEMICOLON EOL
END EOL
TopLevelClassOrInterfaceDeclaration EOL
ClassDeclaration EOL
SEMICOLON EOL
END EOL
ModuleDeclaration EOL
MODULE Name LCB ModuleDirectives RCB EOL
END EOL
ModuleDirectives EOL
ModuleDirective EOL
ModuleDirectives ModuleDirective EOL
END EOL
ModuleDirective EOL
REQUIRES RequiresModifiers Name SEMICOLON EOL
EXPORTS  Name TO Names SEMICOLON EOL
EXPORTS  Name SEMICOLON EOL
OPENS  Name SEMICOLON EOL
OPENS  Name TO Names SEMICOLON  EOL
USES  Name SEMICOLON EOL
PROVIDES  Name WITH  Names SEMICOLON EOL
END EOL
RequiresModifiers  EOL
RequiresModifier  EOL
RequiresModifiers RequiresModifier EOL
END EOL
RequiresModifier EOL
TRANSITIVE EOL
STATIC EOL
END EOL
Type EOL
PrimitiveType EOL
ReferenceType  EOL
END EOL
PrimitiveType EOL
IntegralType EOL
FloatingPointType EOL
BOOLEAN    EOL
END EOL
ReferenceType EOL
ClassOrInterfaceType EOL
ArrayType                                 EOL
END EOL
ArrayType EOL
PrimitiveType Dims EOL
ClassOrInterfaceType Dims EOL
END EOL
ClassOrInterfaceType EOL
ClassType EOL
END EOL
ClassType EOL
Name EOL
END EOL
ClassDeclaration EOL
Modifiers CLASS Identifier Super ClassBody								 EOL
CLASS Identifier Super ClassBody 													 EOL
Modifiers CLASS Identifier ClassBody 												 EOL
CLASS Identifier ClassBody 														 EOL
END EOL
Modifiers   EOL
Modifier  																				 EOL
Modifiers Modifier 																		 EOL
END EOL
Modifier   EOL
PUBLIC 																					 EOL
PROTECTED	 							 													 EOL
PRIVATE 																					 EOL
STATIC 																					 EOL
ABSTRACT 																					 EOL
FINAL 																						 EOL
NATIVE 																					 EOL
SYNCHRONIZED 																				 EOL
TRANSIENT 																					 EOL
VOLATILE 																					 EOL
END EOL
Super EOL
EXTENDS ClassType 																			 EOL
END EOL
ClassBody EOL
LCB RCB 																					 EOL
LCB ClassBodyDeclarationRec RCB 															 EOL
END   EOL
ClassBodyDeclarationRec EOL
ClassBodyDeclaration 														 EOL
ClassBodyDeclarationRec ClassBodyDeclaration 											 EOL
END EOL
ClassBodyDeclaration   EOL
ClassMemberDeclaration 														 EOL
StaticInitializer 																 EOL
ConstructorDeclaration  EOL
InstanceInitializer														 EOL
END EOL
ClassMemberDeclaration EOL
FieldDeclaration 															 EOL
MethodDeclaration											 EOL
END EOL
FieldDeclaration EOL
Modifiers Type VariableDeclarators SEMICOLON 											 EOL
Type VariableDeclarators SEMICOLON 														 EOL
END EOL
VariableDeclarators EOL
VariableDeclarator 																 EOL
VariableDeclarators COMMA VariableDeclarator 										 EOL
END EOL
VariableDeclarator EOL
VariableDeclaratorId 															 EOL
VariableDeclaratorId EQUALTO VariableInitializer 										 EOL
END EOL
VariableDeclaratorId EOL
Identifier 																	 EOL
VariableDeclaratorId LSB RSB							 EOL
END EOL
VariableInitializer EOL
Expression 																		 EOL
ArrayInitializer 																 EOL
END EOL
MethodDeclaration EOL
MethodHeader MethodBody 															 EOL
END EOL
MethodHeader EOL
Modifiers Type MethodDeclarator Throws 												 EOL
Type MethodDeclarator Throws 															 EOL
Modifiers Type MethodDeclarator 														 EOL
Type MethodDeclarator 																	 EOL
Modifiers VOID MethodDeclarator Throws 												 EOL
VOID MethodDeclarator Throws 															 EOL
Modifiers VOID MethodDeclarator 														 EOL
VOID MethodDeclarator 																	 EOL
END EOL
MethodDeclarator EOL
Identifier LRB FormalParameterList RRB 											 EOL
Identifier LRB RRB 																 EOL
MethodDeclarator LSB RSB 														 EOL
END EOL
FormalParameterList EOL
FormalParameter 																 EOL
FormalParameterList COMMA FormalParameter 										 EOL
END EOL
FormalParameter EOL
Type VariableDeclaratorId 															 EOL
END EOL
Throws EOL
THROWS ClassTypeList 																		 EOL
END EOL
ClassTypeList EOL
ClassType 																			 EOL
ClassTypeList COMMA ClassType 															 EOL
END EOL
MethodBody EOL
Block 																					 EOL
SEMICOLON  																					 EOL
END EOL
InstanceInitializer EOL
Block EOL
END EOL
StaticInitializer EOL
STATIC Block 																		 EOL
END EOL
ConstructorDeclaration EOL
Modifiers ConstructorDeclarator Throws ConstructorBody 						 EOL
ConstructorDeclarator Throws ConstructorBody 								 EOL
Modifiers ConstructorDeclarator ConstructorBody 								 EOL
ConstructorDeclarator ConstructorBody 										 EOL
END EOL
ConstructorDeclarator EOL
Identifier LRB FormalParameterList RRB 										 EOL
Identifier LRB RRB 															 EOL
END EOL
ConstructorBody EOL
LCB ExplicitConstructorInvocation BlockStatements RCB 								 EOL
LCB BlockStatements RCB 															 EOL
LCB ExplicitConstructorInvocation RCB 												 EOL
LCB RCB EOL
END EOL
ExplicitConstructorInvocation EOL
THIS LRB ArgumentList RRB SEMICOLON 										 EOL
THIS LRB RRB SEMICOLON 													 EOL
SUPER LRB ArgumentList RRB SEMICOLON 									 EOL
SUPER LRB RRB SEMICOLON 	 EOL
Name DOT SUPER LRB RRB SEMICOLON EOL
Name DOT SUPER LRB ArgumentList RRB SEMICOLON EOL
Primary DOT SUPER LRB RRB SEMICOLON EOL
Primary DOT SUPER LRB ArgumentList RRB SEMICOLON													 EOL
END EOL
ArrayInitializer EOL
LCB RCB EOL
LCB VariableInitializerList RCB EOL
LCB COMMA RCB EOL
LCB VariableInitializerList COMMA RCB EOL
END EOL
VariableInitializerList EOL
VariableInitializer EOL
VariableInitializerList COMMA VariableInitializer EOL
END EOL
Block EOL
LCB BlockStatements RCB 															      EOL
LCB RCB 																		 EOL
END EOL
BlockStatements EOL
BlockStatements BlockStatement 															 EOL
BlockStatement 															 EOL
END EOL
BlockStatement EOL
LocalVariableDeclarationStatement 												 EOL
Statement 																		 EOL
END EOL
LocalVariableDeclarationStatement EOL
LocalVariableDeclaration SEMICOLON 								 EOL
END EOL
LocalVariableDeclaration EOL
Type VariableDeclarators											 EOL
VAR VariableDeclarators EOL
END EOL
Statement EOL
StatementWithoutTrailingSubstatement 														 EOL
LabeledStatement 																  EOL
IfThenStatement 																	 EOL
IfThenElseStatement 															 EOL
WhileStatement 																	 EOL
ForStatement 																	 EOL
END EOL
StatementNoShortIf EOL
StatementWithoutTrailingSubstatement 									 EOL
LabeledStatementNoShortIf 													 EOL
IfThenElseStatementNoShortIf 											 EOL
WhileStatementNoShortIf 												 EOL
ForStatementNoShortIf 													 EOL
END EOL
StatementWithoutTrailingSubstatement EOL
Block 													 EOL
EmptyStatement 										 EOL
ExpressionStatement 									 EOL
AssertStatement EOL
SwitchStatement 										 EOL
DoStatement 																		 EOL
BreakStatement          										 EOL
ContinueStatement 											 EOL
ReturnStatement 										 EOL
SynchronizedStatement 									 EOL
ThrowStatement 										 EOL
TryStatement 										 EOL
END EOL
AssertStatement EOL
ASSERT Expression SEMICOLON EOL
ASSERT Expression COLON Expression SEMICOLON EOL
END EOL
EmptyStatement EOL
SEMICOLON 											 EOL
END EOL
LabeledStatement EOL
Identifier COLON Statement 								 EOL
END EOL
LabeledStatementNoShortIf EOL
Identifier COLON StatementNoShortIf 			 EOL
END EOL
ExpressionStatement EOL
StatementExpression SEMICOLON 					 EOL
END EOL
StatementExpression EOL
Assignment 								 EOL
PreIncrementExpression 					 EOL
PreDecrementExpression 					 EOL
PostIncrementExpression				 EOL
MethodInvocation 							 EOL
ClassInstanceCreationExpression 			 EOL
END EOL
IfThenStatement EOL
IF LRB Expression RRB Statement 													 EOL
END EOL
IfThenElseStatement EOL
IF LRB Expression RRB StatementNoShortIf ELSE Statement 						 EOL
END EOL
IfThenElseStatementNoShortIf EOL
IF LRB Expression RRB StatementNoShortIf ELSE StatementNoShortIf 		 EOL
END EOL
SwitchStatement EOL
SWITCH LRB Expression RRB SwitchBlock 												 EOL
END EOL
SwitchBlock EOL
LCB SwitchBlockStatementGroups SwitchLabels RCB 				 EOL
LCB SwitchLabels RCB 								 EOL
LCB SwitchBlockStatementGroups RCB 				 EOL
LCB RCB 										 EOL
END EOL
SwitchBlockStatementGroups EOL
SwitchBlockStatementGroup 			 EOL
SwitchBlockStatementGroups SwitchBlockStatementGroup EOL
END EOL
SwitchLabels EOL
SwitchLabel 										 EOL
SwitchLabels SwitchLabel 									 EOL
END EOL
SwitchBlockStatementGroup EOL
SwitchLabels BlockStatements 											 EOL
END EOL
SwitchLabel EOL
CASE CaseConstants COLON 														 EOL
DEFAULT COLON 																		 EOL
END EOL
CaseConstants EOL
ConditionalExpression EOL
CaseConstants COMMA ConditionalExpression EOL
END EOL
WhileStatement EOL
WHILE LRB Expression RRB Statement 												 EOL
END EOL
WhileStatementNoShortIf EOL
WHILE LRB Expression RRB StatementNoShortIf 							 EOL
END EOL
DoStatement EOL
DO Statement WHILE LRB Expression RRB SEMICOLON 											 EOL
END EOL
ForStatement EOL
BasicForStatement 																	 EOL
EnhancedForStatement EOL
END EOL
ForStatementNoShortIf EOL
BasicForStatementNoShortIf 	 EOL
EnhancedForStatementNoShortIf													 EOL
END EOL
BasicForStatement EOL
FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 					   EOL
FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB Statement 							 EOL
FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB Statement 							 EOL
FOR LRB SEMICOLON SEMICOLON ForUpdate RRB Statement 									 EOL
FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB Statement 							 EOL
FOR LRB SEMICOLON Expression SEMICOLON RRB Statement 									 EOL
FOR LRB ForInit SEMICOLON SEMICOLON RRB Statement 										 EOL
FOR LRB SEMICOLON SEMICOLON RRB Statement 												 EOL
END EOL
BasicForStatementNoShortIf EOL
FOR LRB ForInit SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf   EOL
FOR LRB SEMICOLON Expression SEMICOLON ForUpdate RRB StatementNoShortIf 		   EOL
FOR LRB ForInit SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf              EOL
FOR LRB SEMICOLON SEMICOLON ForUpdate RRB StatementNoShortIf 					   EOL
FOR LRB ForInit SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 			   EOL
FOR LRB SEMICOLON Expression SEMICOLON RRB StatementNoShortIf 					   EOL
FOR LRB ForInit SEMICOLON SEMICOLON RRB StatementNoShortIf 					   EOL
FOR LRB SEMICOLON SEMICOLON RRB StatementNoShortIf 							   EOL
END EOL
ForInit EOL
StatementExpressionList 																	 EOL
LocalVariableDeclaration 																	 EOL
END EOL
ForUpdate EOL
StatementExpressionList 																 EOL
END EOL
StatementExpressionList EOL
StatementExpressionList COMMA StatementExpression 								 EOL
StatementExpression 														 EOL
END EOL
EnhancedForStatement EOL
FOR LRB LocalVariableDeclaration COLON Expression RRB Statement EOL
END EOL
EnhancedForStatementNoShortIf EOL
FOR LRB LocalVariableDeclaration COLON Expression RRB StatementNoShortIf EOL
END EOL
BreakStatement EOL
BREAK Identifier SEMICOLON 																	 EOL
BREAK SEMICOLON 																			 EOL
END EOL
ContinueStatement EOL
CONTINUE Identifier SEMICOLON 														 EOL
CONTINUE SEMICOLON																	 EOL
END EOL
ReturnStatement EOL
RETURN SEMICOLON 																		 EOL
RETURN Expression SEMICOLON 																 EOL
END EOL
ThrowStatement EOL
THROW Expression SEMICOLON 																	 EOL
END EOL
SynchronizedStatement EOL
SYNCHRONIZED LRB Expression RRB Block 										 EOL
END EOL
TryStatement EOL
TRY Block Catches 																		 EOL
TRY Block Finally 																		 EOL
TRY Block Catches Finally 											 EOL
END EOL
Catches EOL
Catches CatchClause 																			 EOL
CatchClause 																					 EOL
END EOL
CatchClause EOL
CATCH LRB CatchType VariableDeclaratorId RRB Block 													 EOL
END EOL
CatchType EOL
Name EOL
Name CatchTypes EOL
END EOL
CatchTypes  EOL
BITOR ClassType EOL
CatchTypes BITOR CatchType EOL
END EOL
Finally EOL
FINALLY Block 																				 EOL
END EOL
Primary EOL
PrimaryNoNewArray EOL
ArrayCreationExpression EOL
END EOL
PrimaryNoNewArray  EOL
Literal EOL
THIS EOL
Name DOT THIS EOL
LRB Expression RRB                          EOL
ClassInstanceCreationExpression EOL
FieldAccess EOL
ArrayAccess EOL
MethodInvocation EOL
END EOL
ClassInstanceCreationExpression EOL
UnqualifiedClassInstanceCreationExpression                       EOL
Name DOT UnqualifiedClassInstanceCreationExpression              EOL
Primary DOT UnqualifiedClassInstanceCreationExpression           EOL
END EOL
UnqualifiedClassInstanceCreationExpression  EOL
NEW ClassOrInterfaceType LRB ArgumentList RRB  EOL
NEW ClassOrInterfaceType LRB RRB EOL
END EOL
FieldAccess  EOL
Primary DOT Identifier EOL
SUPER DOT Identifier EOL
Name DOT Identifier                 EOL
END EOL
ArrayAccess  EOL
Name LSB Expression RSB EOL
PrimaryNoNewArray LSB Expression RSB EOL
END EOL
MethodInvocation  EOL
Name LRB RSB EOL
Name LRB ArgumentList RRB EOL
Primary DOT Identifier LRB RRB EOL
Primary DOT Identifier LRB ArgumentList RRB EOL
SUPER DOT Identifier LRB RRB EOL
Name DOT SUPER DOT Identifier LRB RRB                       EOL
Name DOT SUPER DOT Identifier LRB ArgumentList RRB          EOL
END EOL
ArgumentList  EOL
Expression EOL
ArgumentList COMMA Expression EOL
END EOL
ArrayCreationExpression  EOL
NEW PrimitiveType DimExprs  EOL
NEW PrimitiveType DimExprs Dims EOL
NEW ClassOrInterfaceType DimExprs EOL
NEW ClassOrInterfaceType DimExprs Dims EOL
NEW PrimitiveType Dims ArrayInitializer              EOL
NEW ClassOrInterfaceType Dims ArrayInitializer       EOL
END EOL
DimExprs  EOL
DimExprs DimExpr EOL
DimExpr EOL
END EOL
DimExpr  EOL
LSB Expression RSB EOL
END EOL
Dims  EOL
LSB RSB EOL
Dims LSB RSB EOL
END EOL
Expression  EOL
AssignmentExpression EOL
END EOL
AssignmentExpression  EOL
ConditionalExpression EOL
Assignment EOL
END EOL
Assignment  EOL
LeftHandSide AssignmentOperator Expression EOL
END EOL
LeftHandSide  EOL
Name EOL
FieldAccess EOL
ArrayAccess EOL
END EOL
AssignmentOperator  EOL
ALTO EOL
USET EOL
NUSET EOL
LTET EOL
VET EOL
DET EOL
END EOL
ConditionalExpression  EOL
ConditionalOrExpression EOL
ConditionalOrExpression QUEST Expression COLON ConditionalExpression EOL
END EOL
ConditionalOrExpression  EOL
ConditionalAndExpression EOL
ConditionalOrExpression OR ConditionalAndExpression EOL
END EOL
ConditionalAndExpression  EOL
InclusiveOrExpression EOL
ConditionalAndExpression AND InclusiveOrExpression EOL
END EOL
InclusiveOrExpression  EOL
ExclusiveOrExpression EOL
InclusiveOrExpression BITOR ExclusiveOrExpression EOL
END EOL
ExclusiveOrExpression  EOL
AndExpression EOL
ExclusiveOrExpression POW AndExpression EOL
END EOL
AndExpression  EOL
EqualityExpression EOL
AndExpression BITAND EqualityExpression EOL
END EOL
EqualityExpression  EOL
RelationalExpression EOL
EqualityExpression EQ RelationalExpression EOL
EqualityExpression NEQ RelationalExpression EOL
END EOL
RelationalExpression  EOL
ShiftExpression EOL
RelationalExpression LT ShiftExpression EOL
RelationalExpression GT ShiftExpression EOL
RelationalExpression LEQ ShiftExpression EOL
RelationalExpression GEQ ShiftExpression EOL
InstanceofExpression EOL
END EOL
InstanceofExpression   EOL
RelationalExpression INSTANCEOF ReferenceType       EOL
END EOL
ShiftExpression  EOL
AdditiveExpression EOL
ShiftExpression LEFTSHIFT AdditiveExpression EOL
ShiftExpression RIGHTSHIFT AdditiveExpression EOL
ShiftExpression THREEGREAT AdditiveExpression EOL
END EOL
AdditiveExpression  EOL
MultiplicativeExpression EOL
AdditiveExpression PLUS MultiplicativeExpression EOL
AdditiveExpression MINUS MultiplicativeExpression EOL
END EOL
MultiplicativeExpression  EOL
UnaryExpression EOL
MultiplicativeExpression MULT UnaryExpression EOL
MultiplicativeExpression DIVIDE UnaryExpression EOL
MultiplicativeExpression MODULO UnaryExpression EOL
END EOL
UnaryExpression  EOL
PreIncrementExpression EOL
PreDecrementExpression EOL
PLUS UnaryExpression EOL
MINUS UnaryExpression EOL
UnaryExpressionNotPlusMinus EOL
END EOL
PreIncrementExpression  EOL
INCREMENT UnaryExpression EOL
END EOL
PreDecrementExpression  EOL
DECREMENT UnaryExpression EOL
END EOL
UnaryExpressionNotPlusMinus  EOL
PostfixExpression EOL
TILDE UnaryExpression EOL
NOT UnaryExpression EOL
CastExpression EOL
SwitchExpression              EOL
END EOL
PostfixExpression  EOL
Primary EOL
PostIncrementExpression EOL
END EOL
PostIncrementExpression  EOL
PostfixExpression INCREMENT EOL
PostfixExpression DECREMENT EOL
END EOL
CastExpression  EOL
LSB PrimitiveType RSB UnaryExpression                  EOL
LSB ReferenceType RSB UnaryExpressionNotPlusMinus        EOL
END EOL
SwitchExpression   EOL
SWITCH LSB Expression RSB SwitchBlock                EOL
END EOL
%%


int main()
{
    yyparse();
    
    return 0;
}
