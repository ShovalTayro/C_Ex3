#Makefile

CC=gcc
CFLAGS= -Wall

all:  isort txtfind

isort: isort.o mainSort.o 
	$(CC) $(CFLAGS) -fPIC -o isort mainSort.o isort.o

mainSort.o: mainSort.c isort.h
	$(CC) $(CFLAGS)  -c mainSort.c

isort.o: isort.c isort.h
	$(CC) $(CFLAGS)  -c isort.c

txtfind: txtfind.o mainFind.o
	$(CC) $(CFLAGS) -fPIC -o txtfind mainFind.o txtfind.o
	
mainFind.o: mainFind.c txtfind.h
	$(CC) $(CFLAGS)  -c mainFind.c

txtfind.o: txtfind.c txtfind.h
	$(CC) $(CFLAGS)  -c txtfind.c
	
.PHONY: clean all

clean:
	rm -f *.o txtfind isort
	