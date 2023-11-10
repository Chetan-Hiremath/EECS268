/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will define the functions of the Executive class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Executive_h
#define Executive_h

class Executive
{
  private:
  void timeOps(int option);

  public:
  Executive();
  ~Executive();
  void userRun();
};
#endif