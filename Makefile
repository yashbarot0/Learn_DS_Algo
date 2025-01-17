# links stdc++ library by default
CC := g++
# or
# CC := cc

all: 1 2

1: First.cpp
	$(CC) First.cpp -o 1.o

2: 2.cpp
	$(CC) 2.cpp -o 2.o

.PHONY: clean
clean:
	-rm *.o

run:
	./$(file).o