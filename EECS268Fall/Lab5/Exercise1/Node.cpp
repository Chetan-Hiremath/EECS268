/* -----------------------------------------------------------------------------
 *
 * File Name: Node.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the implementation of Node. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

template <typename T>
Node<T>::Node(T entry) 
{
  m_entry = entry;
}

template <typename T>
T Node<T>::getEntry() const 
{
  return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry) 
{
  m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const 
{
  return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next) 
{
  m_next = next;
}