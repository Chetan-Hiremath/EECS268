#include "StackOfChars.h"
#include <iostream>

StackOfChars::StackOfChars() 
{
   m_top = NULL;
}
StackOfChars::StackOfChars(const StackOfChars &orig)
{
   m_top = NULL; 
   Node *CurrentOriginal = orig.m_top;
   Node *Current = m_top; 
   while(CurrentOriginal != NULL)
   {
       Node *node = new Node(CurrentOriginal->getEntry());
       if(Current == NULL)
       {
           m_top = node;
           Current = m_top;
       }
       else
       {
           Current->setNext(node);
           Current = Current->getNext();
       }
       CurrentOriginal = CurrentOriginal->getNext();
   }
}
StackOfChars::~StackOfChars()
{
   while(m_top != NULL)
   {
       Node *temp = m_top;
       m_top = m_top->getNext();
       temp->setNext(NULL);
       delete(temp);
       temp = NULL;
   }
}
void StackOfChars:: operator=(const StackOfChars& rhs)
{
  if(this != &rhs)
  {
    while(m_top != NULL)
    {
    Node *temp = m_top;
    m_top = m_top->getNext();
    temp->setNext(NULL);
    delete(temp);
    temp = NULL;
    }
  Node *CurrentOriginal = rhs.m_top;
  Node *Current = m_top;
   while(CurrentOriginal != NULL)
   {
    Node *node = new Node(CurrentOriginal->getEntry());
    if(Current == NULL)
    {
     m_top = node;
     Current = m_top;
    }
    else
    {
     Current->setNext(node);
     Current = Current->getNext();
    }
    CurrentOriginal = CurrentOriginal->getNext();
   }
  }
}
void StackOfChars:: push(char entry)
{
   Node *node = new Node(entry);
   node->setNext(m_top);
   m_top = node;
}
void StackOfChars:: pop()
{
   if(m_top != NULL)
   {
       Node *node = m_top;
       m_top = m_top->getNext();
       delete(node);
   }
}
char StackOfChars:: peek() const
{
   return m_top->getEntry();
}
bool StackOfChars:: isEmpty() const
{ 
   if (m_top == NULL)
   {
    return(true);
   }
   else 
   {
    return(false);
   }
}