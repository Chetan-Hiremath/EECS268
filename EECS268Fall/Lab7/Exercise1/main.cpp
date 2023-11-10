/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This is the implementation of the main program. 
 * Date: October 21, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include "MazeWalker.h"
#include <iostream>
#include <string>

int main(int argv, char** argc)
{
  string userFileName;
  if (argv < 2)
  {
    std:: cout << "Enter a filename: ";
    std:: cin >> userFileName;
    MazeWalker* file = new MazeWalker(userFileName);
    file->userReadMaze();
  }
  else
  {
    userFileName = argc[1];
    MazeWalker* file = new MazeWalker(userFileName);
    file->userReadMaze();
  }
}
