/* -----------------------------------------------------------------------------
 *
 * File Name: MazeWalker.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This is the implementation of Maze Walker. 
 * Date: October 21, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "MazeWalker.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

MazeWalker::MazeWalker(string filename)
{
  userFile = filename;
}

void MazeWalker::userReadMaze()
{
  ifstream inFile;
  inFile.open(userFile);
  if (inFile.is_open())
  {
    inFile >> userYSize;
    inFile >> userXSize;
    inFile >> userXStart;
    inFile >> userYStart;
    userMazeArray = new char* [userYSize];
    for (int x = 0; x < userYSize; x++)
    {
      userMazeArray[x] = new char[userXSize];
    }
    for (int y = 0; y < userYSize; y++)
    {
      for (int x = 0; x < userXSize; x++)
      {
        inFile >> userMazeArray[y][x];
      }
    }
    userRun();
  }
  else
  {
    std:: cout << "The filename given is not valid." << std:: endl;
  }
}

void MazeWalker::userRun()
{
  Maze* maze = new Maze(userMazeArray, userXStart, userYStart, userXSize, userYSize);
  maze->userRun();
}