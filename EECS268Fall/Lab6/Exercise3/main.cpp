#include <iostream> 
#include <string> 
#include "Executive.h"

int main() 
{
    int userNum;
    std:: string userChoice;
    std:: cout << "Verify (-v ) or Know nth term(-i): ";
    std:: cin >> userChoice;
    std:: cout << "Number: ";
    std:: cin >> userNum;
    Executive* exec;
    exec = new Executive(userNum);
    exec->userRun(userChoice);
} 