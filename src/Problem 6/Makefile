pgrm : main.o
	g++ -o pgrm main.o
	
main.o : main.cpp
	g++ -c main.cpp -o $@ -std=c++0x
	
clean:
	rm -f *.o

