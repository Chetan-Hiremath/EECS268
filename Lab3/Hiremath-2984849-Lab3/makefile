prog: main.o StackOfChars.o StackTester.o Node.o
	g++ -std=c++11 -Wall -g main.o StackOfChars.o StackTester.o Node.o -o prog

main.o: main.cpp StackTester.h
	g++ -std=c++11 -Wall -g -c main.cpp

StackTester.o: StackTester.h StackTester.cpp Node.h Node.cpp
	g++ -std=c++11 -Wall -g -c StackTester.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp Node.h Node.cpp
	g++ -std=c++11 -Wall -g -c StackOfChars.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -Wall -g -c Node.cpp

clean:
	rm *.o prog