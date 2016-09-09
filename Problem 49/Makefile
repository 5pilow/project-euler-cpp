pgrm : main.o
	g++ -o pgrm main.o -lgmp -lgmpxx 
	
main.o : main.cpp
	g++ -c main.cpp -o main.o -std=c++0x
	
clean:
	rm -f *.o pgrm

