lex.yy.o: lex.yy.c
	gcc -g -c lex.yy.c

miny.tab.o: miny.tab.cpp
	g++ -g -c miny.tab.cpp

main.o: miny.tab.o lex.yy.o
	g++ -g -c main.cpp 

all: main.o miny.tab.o lex.yy.o
	g++ -o pcodeGen main.o miny.tab.o lex.yy.o






