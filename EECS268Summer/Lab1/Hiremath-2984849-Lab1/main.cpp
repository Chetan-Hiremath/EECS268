/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 1
 * Description: This program will run the entire program. 
 * Date: June 12, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include "Executive.h"

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
     Executive exec(argv[1]); 
     exec.Run(); 
  }
}