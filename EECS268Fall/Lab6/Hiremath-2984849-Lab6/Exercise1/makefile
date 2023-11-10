prog: main.o Executive.o StackOfChars.o Node.o
	g++ -std=c++11 -g -Wall main.o Executive.o StackOfChars.o Node.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp 

Executive.o: Executive.h Executive.cpp StackOfChars.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp Node.h
	g++ -std=c++11 -g -Wall -c StackOfChars.cpp

Node.o: Node.h Node.cpp 
	g++ -std=c++11 -g -Wall -c Node.cpp

clean:
	rm *.o prog