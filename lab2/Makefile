all:  lab2

lab2: lab2.o
	g++ -o $@ lab2.o

lab2.o: lab2.cpp lab2.h
	g++ -c $<

clean: 
	rm -f *.o *.exe *.gch && ls
