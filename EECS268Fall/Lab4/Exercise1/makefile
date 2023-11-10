prog: main.o Stack.o Queue.o
	g++ -std=c++11 -Wall -g main.o Stack.o Queue.o -o prog

main.o: main.cpp Stack.cpp Queue.cpp
	g++ -std=c++11 -Wall -g -c main.cpp

Stack.o: Stack.cpp 
	g++ -std=c++11 -Wall -g -c Stack.cpp

Queue.o: Queue.cpp
	g++ -std=c++11 -Wall -g -c Queue.cpp

clean:
	rm *.o prog
