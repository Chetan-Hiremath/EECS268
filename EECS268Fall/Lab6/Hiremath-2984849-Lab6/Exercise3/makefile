prog: main.o Executive.o
	g++ -std=c++11 -Wall -g main.o Executive.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -Wall -g -c main.cpp 

Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -Wall -g -c Executive.cpp
   
clean:
	rm *.o prog