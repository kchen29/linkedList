all: linkedlist.o main.o
	gcc -o linkedlist linkedlist.o main.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

clean:
	rm -f *.o
	rm -f *~
	rm -rf linkedlist

run: all
	./linkedlist
