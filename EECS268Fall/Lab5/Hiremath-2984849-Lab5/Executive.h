/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the header file for Executive class. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Executive_h
#define Executive_h

#include "BrowserHistory.h"
#include <iostream>
#include <string>
#include <fstream>

class Executive
{
  private:
  BrowserHistory* userHistory;
  std:: fstream userFileReader;
  
  public:
  /** 
  * Pre-Condition: None.
  * Post-Condition: It uses the input.txt to read the command lines and strings of url.
  * Return Condition: It return a new object.
  **/
  Executive(std::string fileName);

  /** 
  * Pre-Condition: Executive class exists.
  * Post-Condition: It de-allocates the memory in the Executive class.
  * Return Condition: None.
  **/
  ~Executive();

  /** 
  * Pre-Condition: Executive class exists.
  * Post-Condition: It calls the Browser History's navigate method.
  * Return Condition: None.
  **/
  void navigate(std::string url);

  /** 
  * Pre-Condition: Executive class exists.
  * Post-Condition: It calls the Browser History's printHistory method.
  * Return Condition: None.
  **/
  void printHistory();

  /** 
  * Pre-Condition: Executive class exists.
  * Post-Condition: It calls the Browser History's forward method.
  * Return Condition: None.
  **/
  void forward();

  /** 
  * Pre-Condition: Executive class exists.
  * Post-Condition: It calls the Browser History's backward method.
  * Return Condition: None.
  **/
  void backward();

  /** 
  * Pre-Condition: Executive class exists if input.txt is present.
  * Post-Condition: It repeats through each command line in input.txt nad calls the respective methods.
  * Return Condition: None.
  **/
  void readFile();
};
#endif