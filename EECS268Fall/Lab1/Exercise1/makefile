prog: main.o Executive.o BoardGames.o 
	g++ -std=c++11 -Wall -g main.o Executive.o BoardGames.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -Wall -g -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -Wall -g -c Executive.cpp

BoardGames.o: BoardGames.h BoardGames.cpp
	g++ -std=c++11 -Wall -g -c BoardGames.cpp

clean:
	rm *.o prog