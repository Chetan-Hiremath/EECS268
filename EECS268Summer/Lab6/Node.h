/* -----------------------------------------------------------------------------
 *
 * File Name: Node.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will define the functions of the Node class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Node_h
#define Node_h

class Node
{
  private:
  int m_entry; 
  Node* m_next;
	
  public:
  Node(int entry);
  int getEntry() const;
  void setEntry(int entry);
  Node* getNext() const;
  void setNext(Node* next);	
};
#endif