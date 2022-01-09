.PHONY:
main.o: main.c
	gcc -c main.c -o output_makefile/main.o
build: main.o
	gcc output_makefile/main.o -o output_makefile/main.exe
run: main.exe
	./output_makefile/main.exe
	