all: lab3

lab3: lab3.o main.o
	g++ -o $@ lab3.o main.o

lab3.o: lab3.cpp lab3.h
	g++ -c $<

main.o: main.cpp lab3.h
	g++ -c $<

clean: 
	rm -f *.o *.exe *.gch  
c:
	del *.o *.exe 
