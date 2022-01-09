build: main.o
	gcc output_makefile/main.o -o output_makefile/main.exe
.PHONY: main.o
main.o: main.c
	gcc -c main.c -o output_makefile/main.o

clean:
	@rm output_makefile/*
	