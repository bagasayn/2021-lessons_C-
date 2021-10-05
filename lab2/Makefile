all: lab2

lab2: lab2.o
	g++ lab2.o -o $@

lab2.o: lab2.cpp
	g++ -c $<

clean: 
	rm -f *.o *.exe