all: work06.c main.c
	gcc work06.c main.c

run: all
	./a.out

clean:
	rm a.out
