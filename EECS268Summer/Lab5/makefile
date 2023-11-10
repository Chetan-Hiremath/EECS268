prog: main.o Map.o Executive.o
	g++ -std=c++11 -g -Wall main.o Map.o Executive.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp 
   
Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp 

Map.o: Map.h Map.cpp
	g++ -std=c++11 -g -Wall -c Map.cpp 

clean:
	rm *.o prog