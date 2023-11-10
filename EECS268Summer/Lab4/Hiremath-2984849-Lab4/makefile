prog: main.o Executive.o BrowserHistory.o 
	g++ -std=c++11 -g -Wall main.o Executive.o BrowserHistory.o -o prog

main.o: main.cpp 
	g++ -std=c++11 -Wall -g -c main.cpp

Executive.o: Executive.h LinkedList.h LinkedList.cpp ListInterface.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

BrowserHistory.o: BrowserHistory.h BrowserHistory.cpp BrowserHistoryInterface.h
	g++ -std=c++11 -g -Wall -c BrowserHistory.cpp

clean:
	rm *.o prog
