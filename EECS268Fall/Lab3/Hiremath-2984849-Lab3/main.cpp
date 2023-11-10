/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 3
 * Description: This program will run the test mode that shows the tests and the parser mode that shows whether a sequence of curly brackets is balanced or not. 
 * Date: September 16, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "StackTester.h"
#include "StackOfChars.h"
#include <iostream>
#include <cstring>
#include <string>

int main(int argc, char* argv[])
{
  if(argc > 1)
  {
     if(strcmp(argv[1],"-t") == 0) 
     {
        StackTester stack;
        stack.runTests();
     }
     else if(strcmp(argv[1],"-p") == 0) 
     {
        StackOfChars stack;
        bool userBalanced = true;
        std:: string userSequence;
        std:: cout << "Enter your sequence: " ;
        std:: cin >> userSequence;
        for(unsigned int i = 0; i < userSequence.length(); i++)
        {
          if(userSequence[i] == '{') 
          {
            stack.push(userSequence[i]);
          }
          else if(userSequence[i] == '}') 
          {
            if(stack.isEmpty())
            {
            userBalanced = false;
            }
          stack.pop(); 
          }
        }
      if (userBalanced)
      {
         if(stack.isEmpty()) 
         {
           std:: cout << "Sequence is balanced." << std:: endl;
         }
         else
         { 
           std:: cout << "Sequence is not balanced." << std:: endl;
         } 
      }
      else 
      {
        std:: cout << "Sequence is not balanced." << std:: endl;
      }
     }
     else 
     {
       std:: cout << "Invalid command line argument!" << std:: endl;
     }
   }
  else 
  {
     std:: cout << "Run one of the 2 modes as a command line argument! (-p: Parser Mode and -t: Test Mode)" << std:: endl;
  }
}