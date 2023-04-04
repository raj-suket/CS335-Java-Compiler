all: parse.o

parse.o: lex.yy.c test.tab.c	
	g++ lex.yy.c test.tab.c -ll -o parse

test.tab.c: test.y
	bison -d -t test.y

lex.yy.c: java_lexer.l  
	flex java_lexer.l

clean:
	rm -rf test.tab.c test.tab.h test1.dot Symbol_Table.txt parse lex.yy.c Image.ps 3ac.txt ../dumps/*.csv