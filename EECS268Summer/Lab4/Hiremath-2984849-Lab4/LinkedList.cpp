/* -----------------------------------------------------------------------------
 *
 * File Name: LinkedList.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 4
 * Description: This is the implementation of Linked List. 
 * Date: July 3, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

template <typename T>
LinkedList<T>::LinkedList() 
{

}

template <typename T>
void LinkedList<T>::insert(int index, T entry) 
{
    if (index < 0 || index > userLength) 
    {
        throw(std::runtime_error("Inserting Invalid Index"));
    }
    if (index == 0) 
    {
        Node<T>* temp = new Node<T>(entry);
        temp->setNext(m_front);
        m_front = temp;
        userLength++;
    }
    else 
    {
        Node<T>* temp = m_front;
        for (int i = 0; i < index - 1; i++) 
        {
            temp = temp->getNext();
        }
        Node<T>* temp2 = temp->getNext();
        temp->setNext(new Node<T>(entry));
        temp = temp->getNext();
        temp->setNext(temp2);
        userLength++;
    }
}

template <typename T>
void LinkedList<T>::remove(int index)
{
    if (index < 0 || index > userLength-1) 
    {
        throw(std::runtime_error("Removing Invalid Index"));
    }
    if (index == 0) 
    {
        Node<T>* temp = m_front->getNext();
        delete m_front;
        m_front = temp;
        userLength--;
    }
    else  
    {
        Node<T>* temp = m_front;
        for (int i = 0; i < index - 1; i++) 
        {
            temp = temp->getNext();
        }
        Node<T>* temp2 = temp->getNext(); 
        temp->setNext(temp2->getNext());
        delete temp2;
        userLength--;
    }
}

template <typename T>
T LinkedList<T>::getEntry(int index) const 
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
        Node<T>* temp = m_front;
        for (int i = 0; i < index; i++) 
        {
            temp = temp->getNext();
        }
        return(temp->getEntry());
    }
}

template <typename T>
void LinkedList<T>::clear() 
{
  while(userLength > 0) 
  {
    remove(0);
  }
}

template <typename T>
void LinkedList<T>::setEntry(int index, T entry) 
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
      Node<T>* temp = m_front;
      for (int i = 0; i < index; i++) 
      {
          temp = temp->getNext();
      }
      return(temp->setEntry(entry));
  }
} 

template <typename T>
int LinkedList<T>::length() const
{
  return(userLength);
}

template <typename T>
LinkedList<T>::~LinkedList() 
{
  delete m_front;
}