/* -----------------------------------------------------------------------------
 *
 * File Name: Stack.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will run the Stack class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Stack.h"
#include <stdexcept>

Stack::Stack()
{
  m_top = nullptr;
}
Stack::~Stack()
{
  while(!isEmpty())
  {
    pop();
  }
}
void Stack::push(int entry)
{
  Node* node = new Node(entry);
  node->setNext(m_top);
  m_top = node;
}
void Stack::pop()
{
  if(isEmpty())
  {
    throw std::runtime_error("ERROR: Pop is attempted on an empty stack!");
  }
  else
  {
    Node* topOfStackNode = m_top;
    m_top = m_top->getNext();
    topOfStackNode->setNext(nullptr);
    delete topOfStackNode;
  }
}
int Stack::peek() const
{
  if(isEmpty())
  {
    throw std::runtime_error("ERROR: Peek is attempted on an empty stack!");
  }
  else
  {
    return m_top->getEntry();
  }
}
bool Stack::isEmpty() const
{
  if(m_top == nullptr)
  {
    return true;
  }
  return false;
}
