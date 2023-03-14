all: parse.o

parse.o: lex.yy.c parser.tab.c	
	g++ lex.yy.c parser.tab.c -ll -o parse

parser.tab.c: parser.y	
	bison -d -t parser.y

lex.yy.c: java_lexer.l  
	flex java_lexer.l