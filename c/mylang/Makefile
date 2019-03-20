

all: mylang 

mylang.o: mylang.c
	gcc -c mylang.c

main.o: main.c
	gcc -c main.c

mylang: main.o mylang.o
	gcc -o mylang main.o mylang.o



