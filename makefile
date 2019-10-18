all: structs.o
        gcc -o program structs.o

structs.o: structs.c
        gcc -c structs.c

run:
        ./program