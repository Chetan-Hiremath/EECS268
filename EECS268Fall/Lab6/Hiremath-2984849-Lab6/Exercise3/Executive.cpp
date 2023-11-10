#include "Executive.h"
using namespace std;

Executive::Executive(int userInput)
{
  userNum = userInput;
}
void Executive::userRun(string userCommandInput)
{
  if (userCommandInput== "-v") 
  {
   bool userCheck = userVerify(0,1);
   if (userCheck == true)
   {
    cout << "The number is in the Fibonacci sequence.\n";
   }
   else 
   {
    cout << "The number is not in the Fibonacci sequence.\n";
   }
  }
  else if (userCommandInput == "-i")
  {
   int userSequence = userFibonacci(0,1,0);
   if (userNum == 1)
   {
     std:: cout << "The " << userNum << "st term is " << userSequence << std:: endl;
   }
   else if (userNum == 2)
   {
     std:: cout << "The " << userNum << "nd term is " << userSequence << std:: endl;
   }
   else if (userNum == 3)
   {
     std:: cout << "The " << userNum << "rd term is " << userSequence << std:: endl;
   }
   else 
   {
     std:: cout << "The " << userNum << "th term is " << userSequence << std:: endl;
   }
  }
}

int Executive::userFibonacci(int userFirstValue, int userSecondValue, int userCount)
{
  int userF = userFirstValue;
  int userS = userSecondValue;
  int userCounter = userCount + 1;
  if (userCounter < userNum)
  {
    return(userFibonacci(userS, userF+userS, userCounter));
  }
  else 
  {
    return(userS);
  }
}
bool Executive::userVerify(int userFirstValue, int userSecondValue)
{
  int userF = userFirstValue;
  int userS = userSecondValue;
  if (userF + userS < userNum)
  {
    return(userVerify(userS, userF+userS));
  }
  else
  {
    if (userF + userS == userNum)
    {
      return(true);
    }
    else 
    {
      return(false);
    }
  }
}