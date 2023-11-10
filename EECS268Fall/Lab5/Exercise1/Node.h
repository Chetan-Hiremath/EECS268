/* -----------------------------------------------------------------------------
 *
 * File Name: Node.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the header file for Node. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Node_h
#define Node_h

template <typename T>
class Node
{
  private:
  T m_entry;
  Node<T>* m_next;

  public:
  /** 
  * Pre-Condition: None.
  * Post-Condition: It creates a new case of the Node.
  * Return Condition: It will return a new Node.
  **/
  Node(T entry);

  /** 
  * Pre-Condition: Node exists.
  * Post-Condition: It checks the values within the Node.
  * Return Condition: It will return the character within the current Node.
  **/
  T getEntry() const;

  /** 
  * Pre-Condition: Node exists.
  * Post-Condition: It sets the character value within the Node.
  * Return Condition: None.
  **/
  void setEntry(T entry);

  /** 
  * Pre-Condition: Node exists.
  * Post-Condition: If checks the next Node values within the Node.
  * Return Condition: It will return the next Node within the current Node.
  **/
  Node<T>* getNext() const;

  /** 
  * Pre-Condition: Node exists.
  * Post-Condition: It sets the next Node value within the node.
  * Return Condition: None.
  **/
  void setNext(Node<T>* next);
};
#include "Node.cpp"
#endif