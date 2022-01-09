main.o: main.c
	gcc -c main.c -o Output_makefile/main.o
main.i: main.c
	gcc -c main.c -o output_makefile/main.i
build: Output_makefile/main.o
	gcc Output_makefile/main.o -o Output_makefile/main.exe
clean:
	rm Output_makefile/*
run:
	./Output_makefile/main.exe
buildandrun: src/main.c
	gcc -c src/main.c -o output/LearnMakefile.exe
	