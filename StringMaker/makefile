run:test.o StringMaker.o

	gcc -std=gnu99 -o run test.o StringMaker.o

test.o: test.c StringMaker.h

	gcc -std=gnu99 -c test.c

StringMaker.o: StringMaker.c StringMaker.h

	gcc -std=gnu99 -c StringMaker.c

clean:
	rm test.o StringMaker.o

