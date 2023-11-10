/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will define the variables and the functions of the Executive class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Executive_h
#define Executive_h
#include <string>
#include <fstream>
#include "BST.h"

class Executive
{
  private:
  std::ifstream inputFile;
  bool validFile();
  BST tree;
  BST copyTree;
  bool copyCreated;
  void printMenu();
  int version;

  public:
  Executive(std::string fileName);
  ~Executive();
  void userRun();
};
#endif