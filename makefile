all: sieve.o
	gcc sieve.o

sieve.o: sieve.c
	gcc -c sieve.c

run:
	./a.out

clean:
	rm *.o .out
