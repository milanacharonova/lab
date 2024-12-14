all: 	func.o lab.o
	gcc func.o lab.o
main.o: func.c
	gcc -c func.c
file.o: lab.c
	gcc -c lab.c
run:	
	./a.out
clean:
	rm *.o
	rm a.out	
