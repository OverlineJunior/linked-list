all: main.exe run

main.exe: main.c ../linked_list.c
	@clang -Wall -o main.exe main.c ../linked_list.c

run: main.exe
	@./main.exe
