prog: main.o Executive.o Pokemon.o BST.o BNode.o 
	g++ -std=c++11 -g -Wall main.o Executive.o Pokemon.o BST.o BNode.o -o prog

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp 
   
Executive.o: Executive.h Executive.cpp BST.h Pokemon.h
	g++ -std=c++11 -g -Wall -c Executive.cpp 

Pokemon.o: Pokemon.h Pokemon.cpp 
	g++ -std=c++11 -g -Wall -c Pokemon.cpp 

BST.o: BST.h BST.cpp BNode.h BinarySearchTreeInterface.h
	g++ -std=c++11 -g -Wall -c BST.cpp 

BNode.o: BNode.h BNode.cpp Pokemon.h
	g++ -std=c++11 -g -Wall -c BNode.cpp

clean:
	rm *.o prog