/* -----------------------------------------------------------------------------
 *
 * File Name: LinkedList.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will run the Linked List class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "LinkedList.h"
#include <stdexcept>

LinkedList::LinkedList() 
{

}
LinkedList::~LinkedList() 
{
  delete m_front;
}
void LinkedList::insert(int index, int entry) 
{
  if (index < 0 || index > userLength) 
  {
    throw(std::runtime_error("Inserting Invalid Index"));
  }
  if (index == 0) 
  {
    Node* temp = new Node(entry);
    temp->setNext(m_front);
    m_front = temp;
    userLength++;
  }
  else 
  {
    Node* temp = m_front;
    for (int i = 0; i < index-1; i++) 
    {
      temp = temp->getNext();
    }
    Node* temp2 = temp->getNext();
    temp->setNext(new Node(entry));
    temp = temp->getNext();
    temp->setNext(temp2);
    userLength++;
  }
}
void LinkedList::remove(int index)
{
  if (index < 0 || index > userLength-1) 
  {
    throw(std::runtime_error("Removing Invalid Index"));
  }
  if (index == 0) 
  {
    Node* temp = m_front->getNext();
    delete m_front;
    m_front = temp;
    userLength--;
  }
  else  
  {
    Node* temp = m_front;
    for (int i = 0; i < index-1; i++) 
    {
      temp = temp->getNext();
    }
    Node* temp2 = temp->getNext(); 
    temp->setNext(temp2->getNext());
    delete temp2;
    userLength--;
  }
}
int LinkedList::getEntry(int index) const 
{
  if (index < 0 || index > userLength) 
  {
    throw(std::runtime_error("Getting Invalid Index"));
  }
  if (index == 0) 
  {
    return(m_front->getEntry());
  }
  else 
  {
    Node* temp = m_front;
    for (int i = 0; i < index; i++) 
    {
      temp = temp->getNext();
    }
    return(temp->getEntry());
  }
}
void LinkedList::clear() 
{
  while(userLength > 0) 
  {
    remove(0);
  }
}
void LinkedList::setEntry(int index, int entry) 
{
  if (index < 0 || index > userLength) 
  {
    throw(std::runtime_error("Setting Invalid Index"));
  }
  if (index == 0) 
  {
    return(m_front->setEntry(entry));
  }
  else 
  {
    Node* temp = m_front;
    for (int i = 0; i < index; i++) 
    {
      temp = temp->getNext();
    }
    return(temp->setEntry(entry));
  }
} 
int LinkedList::length() const
{
  return(userLength);
}