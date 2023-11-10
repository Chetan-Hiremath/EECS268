/* -----------------------------------------------------------------------------
 *
 * File Name: Queue.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will define the functions of the Queue class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Queue_h
#define Queue_h
#include "Node.h"

class Queue
{
  private:
  Node* m_front;
  Node* m_back;
	
  public:
  Queue();
  ~Queue();
  void enqueue(int entry);
  void dequeue();
  int peek_front() const;
  bool isEmpty() const; 
};
#endif