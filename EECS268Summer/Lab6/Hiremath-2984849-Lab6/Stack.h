/* -----------------------------------------------------------------------------
 *
 * File Name: Stack.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will define the functions of the Stack class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Stack_h
#define Stack_h
#include "Node.h"

class Stack
{
  private:
  Node* m_top;
 
  public:
  Stack();
  ~Stack();
  void push(int entry);
  void pop();
  int peek() const;
  bool isEmpty() const;
};
#endif
