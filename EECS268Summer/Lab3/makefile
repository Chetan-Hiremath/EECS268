prog: main.o Executive.o ShapeContainer.o Circle.o Triangle.o Rectangle.o
	g++ -std=c++11 -g -Wall main.o Executive.o ShapeContainer.o Circle.o Triangle.o Rectangle.o -o prog

main.o: main.cpp Shape.h
	g++ -std=c++11 -Wall -g -c main.cpp

Executive.o: Executive.cpp Executive.h Circle.h Circle.cpp Rectangle.h Rectangle.cpp Triangle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Circle.o: Circle.h Circle.cpp Shape.h
	g++ -std=c++11 -g -Wall -c Circle.cpp

Triangle.o: Triangle.h Triangle.cpp Shape.h
	g++ -std=c++11 -g -Wall -c Triangle.cpp

Rectangle.o: Rectangle.h Rectangle.cpp Shape.h
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp Circle.h Circle.cpp Triangle.h Triangle.cpp Rectangle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

clean:
	rm *.o prog