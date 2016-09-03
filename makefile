all: memtest

memtest: mem_check.o mem_test.o
	gcc mem_test.o mem_check.o -o memtest

mem_check: mem_check.c 
	gcc -c mem_test.c 

mem_test: mem_test.c mem_check.h
	gcc -c mem_test.c 

clean:
	rm -rf *.o memtest
