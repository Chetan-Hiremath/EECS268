/* -----------------------------------------------------------------------------
 *
 * File Name: Queue.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will run the Queue class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Queue.h"
#include <stdexcept>

Queue::Queue()
{
  m_front = nullptr;
  m_back = nullptr;
}
Queue::~Queue()
{
  while(!isEmpty())
  {
    dequeue();
  }
}
void Queue::enqueue(int entry)
{
  Node* temp = new Node(entry);
  if (!isEmpty()) 
  {
    m_back->setNext(temp);
    m_back = temp;
  } 
  else 
  {
    m_back = temp;
    m_front = temp;
  }
} 
void Queue::dequeue()
{
  if (!isEmpty()) 
  {
    Node* temp = m_front;
    m_front = m_front->getNext();
    if (m_front == nullptr) 
    {
      m_back = nullptr;
    }
    temp->setNext(nullptr);
    delete temp;
  } 
  else 
  {
    throw(std::runtime_error("ERROR: Dequeue is called on an empty queue!"));
  }
}
int Queue::peek_front() const
{
  if (!isEmpty()) 
  {
    return m_front->getEntry();
  } 
  else 
  {
    throw(std::runtime_error("ERROR: PeekFront is called on an empty queue!"));
  }
}
bool Queue::isEmpty() const 
{
  if(m_front == nullptr && m_back == nullptr)
  {
    return true;
  }
  return false;
}