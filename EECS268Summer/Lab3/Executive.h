/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will define the variables and the functions of the Executive class. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Executive_h
#define Executive_h
#include "ShapeContainer.h"
#include <string>
#include <iostream>

class Executive
{
        public:
        //Pre-Condition: It is called as a constructor.
	//Post-Condition: It sets a up new shape based on the file.
	//Return-Condition: None.
	Executive(std::string file);
  
        //Pre-Condition: It is called as a destructor.
	//Post-Condition: It will remove memory leaks.
	//Return-Condition: None.
	~Executive();

        //Pre-Condition: It is called as a constructor.
	//Post-Condition: It will run the entire program by providing the shapes' areas.
	//Return-Condition: None.
	void Run();
        
        private:
	std::string userFilename;
	ShapeContainer* userShapes;
	int userSize;
};
#endif