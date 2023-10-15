CC = gcc
CFLAGS = -Wall

all: test

fcfs.o: fcfs.c process.h
	$(CC) $(CFLAGS) -c fcfs.c -o fcfs.o

priority.o: priority.c process.h
	$(CC) $(CFLAGS) -c priority.c -o priority.o

test.o: test.c process.h
	$(CC) $(CFLAGS) -c test.c -o test.o

test: fcfs.o priority.o test.o
	$(CC) fcfs.o priority.o test.o -o test

clean:
	rm -f *.o test
