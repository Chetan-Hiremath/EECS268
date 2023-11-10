/* -----------------------------------------------------------------------------
 *
 * File Name: MazeWalker.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This is the header file for Maze Walker. 
 * Date: October 21, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef MazeWalker_h
#define MazeWalker_h
#include "Maze.h"
#include <string>
using namespace std;

class MazeWalker
{
  public:
  /** 
  * Pre-Condition: It takes a name of the file.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  MazeWalker(string filename);

  /** 
  * Pre-Condition: It gets called in the Maze, takes the sizes and the starting points of the maze, and reads the file.
  * Post-Condition: It makes arrays of Maze.
  * Return Condition: None.
  **/
  void userReadMaze();

  private:
  /** 
  * Pre-Condition: It is called in the Maze class.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  void userRun();

  string userFile;
  char** userMazeArray;
  int userXStart;
  int userYStart;
  int userXSize;
  int userYSize;
};
#endif