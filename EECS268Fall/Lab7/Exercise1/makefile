prog: main.o Maze.o MazeWalker.o 
	g++ -std=c++11 -Wall -g main.o Maze.o MazeWalker.o -o prog

main.o: main.cpp MazeWalker.h 
	g++ -std=c++11 -Wall -g -c main.cpp

MazeWalker.o: MazeWalker.h MazeWalker.cpp
	g++ -std=c++11 -Wall -g -c MazeWalker.cpp

Maze.o: Maze.h Maze.cpp
	g++ -std=c++11 -Wall -g -c Maze.cpp

clean:
	rm *.o prog