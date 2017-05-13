OBJ= y.tab.o lex.yy.o
CC= gcc
PROG= parser
OTHER= lex.yy.c y.tab.c y.tab.h y.output

all: ${PROG}

${PROG}: ${OBJ}
	gcc -o parser lex.yy.o y.tab.o -ll -ly

lex.tab.o: y.tab.h
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: scanner.l y.tab.c
	flex scanner.l

y.tab.c: new_parser.y
	bison -vdty new_parser.y

clean:
	rm ${OBJ} ${PROG} ${OTHER}