run:test.o SortBags.o

	gcc -std=gnu99 -o run test.o SortBags.o

test.o: test.c SortBags.h

	gcc -std=gnu99 -c test.c

SortBags.o: SortBags.c SortBags.h

	gcc -std=gnu99 -c SortBags.c

clean:
	rm test.o SortBags.o

