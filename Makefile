CC=gcc
CFLAGS= -g -ansi -pedantic -Wall -Werror -I.
LDFLAGS= -pg

all: main

main: main.o task.o

clean:
	@rm  *.o

clean-all: clean
	@rm -f main