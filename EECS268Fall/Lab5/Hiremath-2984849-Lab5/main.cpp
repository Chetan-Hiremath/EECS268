/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the implementation of the main program. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

#include "Executive.h"
#include "LinkedList.h"

int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    std:: cout << "Incorrect number of parameters!" << std:: endl;
  }
  else 
  {
    Executive* executive = new Executive(argv[1]);
    executive->readFile();
    delete executive;
  }
}