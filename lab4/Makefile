all:  lab4

lab4: lab4.o main.o
	g++ -o $@ lab4.o main.o

lab4.o: lab4.cpp lab4.h
	g++ -c $<

main.o: main.cpp lab4.h
	g++ -c $<

clean: 
	rm -f *.o *.exe *.gch  
c:
	del *.o *.exe 
