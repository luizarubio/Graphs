all: compile

compile:
	@gcc -c MatAdj.c -w
	@gcc -o main main.c -g -lm -w *.o

run:
	@./main


