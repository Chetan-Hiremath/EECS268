/* -----------------------------------------------------------------------------
 *
 * File Name: LinkedList.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will define the functions the Linked List class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"

class LinkedList
{
  private:
  Node* m_front;
  int userLength;
  
  public:
  LinkedList();
  ~LinkedList();
  void insert(int index, int entry);
  void remove(int index);
  int getEntry(int index) const;
  void clear();
  void setEntry(int index, int entry);
  int length() const;
};
#endif