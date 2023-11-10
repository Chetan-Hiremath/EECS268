/* -----------------------------------------------------------------------------
 *
 * File Name: Maze.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This is the header file for the Maze class. 
 * Date: October 21, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Maze_h
#define Maze_h
#include <string>

using namespace std;

class Maze
{
  public:
  /** 
  * Pre-Condition: It takes the arrays of chars, the starting points, and the sizes in the maze.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  Maze(char** mazePass, int xPass, int yPass, int row, int column);

  /** 
  * Pre-Condition: None.
  * Post-Condition: It recurses and backtracks inside the maze.
  * Return Condition: None.
  **/
  void userRun();

  private:
  /** 
  * Pre-Condition: It gets a position for the start of the maze and moves.
  * Post-Condition: It calls whether the right coordinates can help the position to move or not.
  * Return Condition: It will move if it can move. If not then it's false. 
  **/
  bool userNextStep(int xPos, int yPos, int userCount);

  /** 
  * Pre-Condition: It gets the position and the moving symbol.
  * Post-Condition: None.
  * Return Condition: It will move if it is able to move in the maze.
  **/
  bool userOutOfBounds(int x, int y, char userSymbol);

  /** 
  * Pre-Condition: It will print the output if the move is successful.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  void userOutput(bool userChoice);
 
  char** userMaze;
  int** userVisitedSpaces;
  int userXStart;
  int userYStart;
  int userXSize;
  int userYSize;
};
#endif 