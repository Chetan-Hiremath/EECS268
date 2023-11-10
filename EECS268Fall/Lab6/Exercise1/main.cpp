#include "Executive.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) 
{ 
    std:: string userInput;
    if (argc < 1) 
    {
      std:: string userInput;
      std:: cout << "Input string: ";
      std:: cin >> userInput;
      Executive* exec;
      exec = new Executive(userInput);
    }
    else 
    {
      std:: string userInput = argv[1]; 
      Executive* exec;
      exec = new Executive(userInput);
    }
} 