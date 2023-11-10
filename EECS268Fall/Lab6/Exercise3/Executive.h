#ifndef Executive_h
#define Executive_h
#include <iostream>
#include <string>
using namespace std;

class Executive
{
 public:
 /** 
 * Pre-Condition: none.
 * Post-Condition: It sets the userNum equal to userInput.
 * Return Condition: None.
 **/
 Executive(int userInput);

 /** 
 * Pre-Condition: None.
 * Post-Condition: It calculates the value for the Fibonacci sequence.
 * Return Condition: None.
 **/
 int userFibonacci(int userFirstValue, int userSecondValue, int userCount);

 /** 
 * Pre-Condition: None.
 * Post-Condition: It verifies whether the value in the Fibonacci sequence exists or not.
 * Return Condition: It returns true if the value in the Fibonacci sequence exists. If not, then it returns false. 
 **/
 bool userVerify(int userFirstValue, int userSecondValue);

 /** 
 * Pre-Condition: None.
 * Post-Condition: It shows the Fibonacci sequence for the corresponding value.
 * Return Condition: It shows whether the value is in the Fibonacci sequence or not.
 **/
 void userRun(string userCommandInput);
 
 private:
 int userNum;  
};
#endif