/* -----------------------------------------------------------------------------
 *
 * File Name: LinkedList.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 4
 * Description: This is the header file for Linked List. 
 * Date: July 3, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef LinkedList_h
#define LinkedList_h
#include "ListInterface.h"
#include "Node.h"
#include <stdexcept>

template <typename T>
class LinkedList: ListInterface<T>
{
  private:
  Node<T>* m_front;
  int userLength;
  
  public:
  /** 
  * Pre-Condition: None.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  LinkedList();

  /** 
  * Pre-Condition: The index is valid.
  * Post-Condition: The entry is added to the list at the index that increases its length by 1.
  * Return Condition: It will throw std::runtime_error if the index is invalid.
  **/
  void insert(int index, T entry);

  /** 
  * Pre-Condition: The index is valid.
  * Post-Condition: The entry is removed to the list at the index that decreases its length by 1.
  * Return Condition: It will throw std::runtime_error if the index is invalid.
  **/
  void remove(int index);

  /** 
  * Pre-Condition: The index is valid.
  * Post-Condition: None.
  * Return Condition: It will throw std::runtime_error if the index is invalid.
  **/
  T getEntry(int index) const;

  /** 
  * Pre-Condition: None.
  * Post-Condition: The list is empty.
  * Return Condition: None.
  **/
  void clear();

  /** 
  * Pre-Condition: The index is valid.
  * Post-Condition: It overrides the entry at the given index.
  * Return Condition: It will throw std::runtime_error if the index is invalid.
  **/
  void setEntry(int index, T entry);

  /** 
  * Pre-Condition: None.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  int length() const;

  /** 
  * Pre-Condition: None.
  * Post-Condition: None.
  * Return Condition: None.
  **/
  ~LinkedList();
};
#include "LinkedList.cpp"
#endif