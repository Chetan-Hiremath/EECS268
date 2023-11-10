#include "Executive.h"
#include "StackOfChars.h"
#include "Node.h"
#include <iostream>
#include <string>
using namespace std;

bool Executive::userRun(int userPlacement)
{
  int userPlace = userPlacement;
  bool userFunction = false;
  int userLength = userSequence.length();
  if (userPlace != userLength)
  {
    if (userSequence.at(userPlace) == '(')
    {
      userPlace++;
      stack->push('(');
      userFunction = userRun(userPlace);
    }
    else if (userSequence.at(userPlace) == ')')
    {
      stack->pop();
      userPlace++;
      userFunction = userRun(userPlace);
    }
  }
  else 
  {
    if (stack->isEmpty())
    {
      userFunction = true;
    }
    else 
    {
      userFunction = false;
    }
  }
  return (userFunction);       
}

Executive:: Executive(std::string userInput)
{
  userSequence = userInput;
  stack = new StackOfChars();
  bool userExit = 0;
  if (userInput.at(0) != ')')
  {
    userExit = userRun(0);
    if (userExit == false)
    {
      std:: cout << "The sequence " << userInput << " is not balanced." << std:: endl;
    }
    else 
    {
      std:: cout << "The sequence " << userInput << " is balanced." << std:: endl;
    }
  }
  else 
  {
    std:: cout << "The sequence " << userInput << " is not balanced." << std:: endl;
  }
}