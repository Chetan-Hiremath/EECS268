#ifndef Executive_h
#define Executive_h
#include "StackOfChars.h"
#include <string>
#include <iostream>
using namespace std;

class Executive
{
    private:
    std:: string userSequence;
    StackOfChars* stack; 
    
    public:
    /** 
    * Pre-Condition: It gets called in the sequence.
    * Post-Condition: It shows whether it is balanced or not.
    * Return Condition: None.
    **/
    Executive(std:: string userInput);

    /** 
    * Pre-Condition: It gets called and passed to the original point.
    * Post-Condition: It calls itself and passes the original point, which increases by 1.
    * Return Condition: It returns true if the stack is empty. If not, then it returns false.
    **/
    bool userRun(int userPlacement);
};
#endif