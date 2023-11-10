#include "Queue.cpp"
#include "Stack.cpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <stdexcept>

int main() 
{
    ifstream userFile;
    userFile.open("input.txt");
    Queue <string> Q;
    Stack <string> S;
    while (userFile)
    {
        string userLine = "";
        getline(userFile, userLine); 
        if (userLine == " ")
        {
            break;
        }
        if (userLine == "INSPECTION")
        {
            std:: cout << "Elevator status: " << std:: endl;
            if (S.count() == 0)
            {
                std:: cout << "The elevator is empty." << std:: endl;
                std:: cout << "No one is in the elevator." << std:: endl;
                try
                {
                     std:: cout << Q.peekFront() << " will be the next person to get on the elevator." << std:: endl;
                }
                catch (std::exception& e)
                {
                     std:: cout << e.what() << std:: endl;
                }

            } 
            else 
            {
                std:: cout << "The elevator is not empty." << std:: endl;
                try
                {
                    std:: cout << S.peek() << " will be the next person to leave the elevator." << std:: endl;
                    std:: cout << Q.peekFront() << " will be the next person to get on the elevator." << std:: endl;
                }
                catch (std::exception& e)
                {
                    std:: cout << e.what() << std:: endl;
                }  
            }       
        } 
        else if (userLine == "PICK_UP")
        { 
            for (int i = 0; i < 7; i++)
            {
                try
                {
                    string userFront = Q.peekFront();
                    S.push(userFront);
                }
                catch (std::exception& e)
                {
                    std:: cout << e.what() << std:: endl;
                    break;
                }
                Q.dequeue();
            }
        } 
        else 
        {
            std:: string userCommand = userLine.substr(0, userLine.find(" "));
            std:: string userArg = userLine.substr(userLine.find(" ") + 1);
            if (userCommand == "WAIT") 
            { 
                Q.enqueue(userArg);
            } 
            else if (userCommand == "DROP_OFF") 
            { 
                std:: stringstream userStringStream;
                userStringStream << userArg;
                int userNum;
                userStringStream >> userNum;
                try
                {
                    for (int i = 0; i < userNum; i++)
                    {
                        S.pop();
                    }
                }
                catch (std::exception& e)
                {
                    std:: cout << e.what() << std:: endl;
                }                
            }
        }
    }
}