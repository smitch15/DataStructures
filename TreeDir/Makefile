CC = g++
CFLAGS = -c -Wall

all: tree

tree: tree.o main.o
	$(CC) tree.o main.o -o tree

tree.o: tree.cpp
	$(CC) $(CFLAGS) tree.cpp 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

clean:
	rm *.o tree
