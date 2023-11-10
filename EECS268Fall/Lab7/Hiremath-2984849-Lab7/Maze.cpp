/* -----------------------------------------------------------------------------
 *
 * File Name: Maze.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This is the implementation of the Maze class. 
 * Date: October 21, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Maze.h"
#include <string>
#include <iostream>

Maze::Maze(char** mazePass, int yPass, int xPass, int row, int col)
{
  userMaze = mazePass;
  userXStart = xPass;
  userYStart = yPass;
  userYSize = col;
  userXSize = row;
  userVisitedSpaces = new int* [userYSize];
  for (int y = 0; y < userYSize; y++)
  {
    userVisitedSpaces[y] = new int[userXSize];
  }
  for (int y = 0; y < userYSize; y++)
  {
    for (int x = 0; x < userXSize; x++)
    {
        userVisitedSpaces[y][x] = 0;
    }
  }
}

void Maze::userRun()
{
  bool userSuccess = false;
  if(userMaze[userYStart][userXStart] != 'W'|| userYStart < 0 || userXStart < 0)
  {
    userSuccess = userNextStep(userXStart, userYStart, 1);
    userOutput(userSuccess);
  }
  else
  {
    std:: cout << "Invalid Starting Position" << std:: endl;
  }
}

bool Maze::userNextStep(int yPos, int xPos, int userCount)
{
  userVisitedSpaces[xPos][yPos] = userCount;
  bool userTF = false;
  int x = yPos;
  int y = xPos;
  if (userMaze[y][x] == 'E')
  {
    return(true);
  }
  if (userOutOfBounds(y, x, 'U') == false && userVisitedSpaces[y-1][x] == 0)
  {
    userTF = userNextStep(x, y-1, userCount+1);
    if(userTF == true)
    {
      return(true);
    }
  }
  if (userOutOfBounds(y, x, 'R') == false && userVisitedSpaces[y][x+1] == 0)
  {
    userTF = userNextStep(x+1, y, userCount+1);
    if(userTF == true)
    {
      return(true);
    }
  }
  if (userOutOfBounds(y, x, 'D') == false && userVisitedSpaces[y+1][x] == 0)
  {
    userTF = userNextStep(x, y+1, userCount+1);
    if(userTF == true)
    {
      return(true);
    }
  }
  if (userOutOfBounds(y, x, 'L') == false && userVisitedSpaces[y][x-1] == 0)
  {
    userTF = userNextStep(x-1, y, userCount+1);
    if(userTF == true)
    {
      return(true);
    }
  }
  userVisitedSpaces[y][x] =0;
  return userTF;
}

bool Maze::userOutOfBounds(int y, int x, char userSymbol)
{
  if (x < userXSize && x >=0 && y < userYSize && y>=0)
  {
    if (userSymbol == 'U')
    {
      if (userMaze[y-1][x] == 'W')
      {
        return(true);
      }
      else
      {
        return(false);
      }
    }
    else if (userSymbol == 'R')
    {
      if (userMaze[y][x+1] == 'W')
      {
        return(true);
      }
      else
      {
        return(false);
      }
    }
    else if (userSymbol == 'D')
    {
      if (userMaze[y+1][x] == 'W')
      {
        return(true);
      }
      else
      {
        return(false);
      }
    }
    else if (userSymbol == 'L')
    {
      if (userMaze[y][x-1] == 'W')
      {
        return(true);
      }
      else
      {
        return(false);
      }
    }
  }
  else 
  {
    return(true);
  }
}

void Maze::userOutput(bool userChoice)
{
  if (userChoice)
  {
    std:: cout << "Starting Position: " << userYStart << ", " << userXStart << std:: endl;
    std:: cout << "Size: " << userYSize << ", " << userXSize << std:: endl;
    for (int y = 0; y < userYSize; y++)
    {
      for (int x = 0; x < userXSize; x++)
      {
        std:: cout << userVisitedSpaces[y][x];
        if (userVisitedSpaces[y][x] < 10)
        {
          std:: cout << "     ";
        }
        else if (userVisitedSpaces[y][x] < 100)
        {
          std:: cout << "    ";
        }
      }
      std:: cout << std:: endl;
    }
    std:: cout << "We Escaped!!" << std:: endl;
  }
  else
  {
   std:: cout << "Starting Position: " << userYStart << ", " << userXStart << std:: endl;
   std:: cout << "Size: " << userYSize << ", " << userXSize << std:: endl;
   std:: cout << " No way out!" << std:: endl;
  }
}