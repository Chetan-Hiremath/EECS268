/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will run the main program. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Executive.h"
#include <iostream>
#include <stdexcept>

int main(int argc, char** argv)
{
  try 
  { 
    if (argc < 2)
    {
      throw(std::runtime_error("Filename is required!\n"));
    }
    else 
    {
      Executive exec(argv[1]);
      exec.userRun();
    }
  }
  catch(std::runtime_error& rte)
  {
    std::cout << rte.what();
  }
}
