all: build
build: lab5z1.c lab5z2.c main.c tree.c simpletree.c stack.c get.c
	gcc -Wall -O0 -g3 -DDEBUG -std=c89 lab5z1.c lab5z2.c main.c tree.c simpletree.c stack.c get.c  -o programm
	
run: programm.exe
	./programm.exe
	
clean: 
	rm -rf *.o programm