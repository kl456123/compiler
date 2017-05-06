OBJ= y.tab.o lex.yy.o
CC= gcc
PROG= parser
OTHER= lex.yy.c y.tab.c y.tab.h y.output

all: ${PROG}

${PROG}: ${OBJ}
	gcc -o parser lex.yy.o y.tab.o -ll -ly

lex.yy.c: scanner.l y.tab.c
	flex scanner.l

y.tab.c: parser.y
	bison -vdty parser.y

clean:
	rm ${OBJ} ${PROG} ${OTHER}