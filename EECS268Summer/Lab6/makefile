prog: main.o Executive.o Stack.o Queue.o LinkedList.o Node.o
	g++ -std=c++11 -g -Wall main.o Executive.o Stack.o Queue.o LinkedList.o Node.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp 
   
Executive.o: Executive.h Executive.cpp Stack.h Queue.h LinkedList.h
	g++ -std=c++11 -g -Wall -c Executive.cpp 

Stack.o: Stack.h Stack.cpp Node.h
	g++ -std=c++11 -g -Wall -c Stack.cpp 

Queue.o: Queue.h Queue.cpp Node.h
	g++ -std=c++11 -g -Wall -c Queue.cpp 

LinkedList.o: LinkedList.h LinkedList.cpp Node.h
	g++ -std=c++11 -g -Wall -c LinkedList.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

clean:
	rm *.o prog