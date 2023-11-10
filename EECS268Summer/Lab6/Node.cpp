/* -----------------------------------------------------------------------------
 *
 * File Name: Node.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will run the Node class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Node.h"

Node::Node(int entry)
{
  m_entry = entry;
  m_next = nullptr;	
}
int Node::getEntry() const
{ 
  return(m_entry);
}
void Node::setEntry(int entry)
{
  m_entry = entry;
}
Node* Node::getNext() const
{
  return(m_next);
}
void Node::setNext(Node* next)
{
  m_next = next;
}