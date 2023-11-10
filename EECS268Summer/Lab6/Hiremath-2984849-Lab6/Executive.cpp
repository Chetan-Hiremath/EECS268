/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 6
 * Description: This program will give the data of every data structure by the Executive class. 
 * Date: July 17, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include "Executive.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include <time.h>

Executive::Executive()
{

}
Executive::~Executive()
{

}
void Executive::timeOps(int option)
{
  if (option == 1)
  {
    int start = 1;
    int limit = 1000;
    Stack* stack = new Stack();
    while (limit <= 100000)
    {
      for (int i = start; i <= limit; i++)
      {
        stack->push(i);
      }
      start = limit + 1;
      limit = limit + 1000;
      clock_t before;
      clock_t after;
      before = clock();
      stack->pop();
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "Pop took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds." << std::endl;
    }
  }
  else if (option == 2)
  {
    int start = 1;
    int limit = 1000;
    Stack* stack;
    while (limit <= 100000)
    {
      stack = new Stack();
      for (int i = start; i <= limit; i++)
      {
        stack->push(i);
      }
      start = limit + 1;
      limit = limit + 1000;
      clock_t before;
      clock_t after;
      before = clock();
      delete stack;
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "Destructor took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds." << std::endl;
    }
  }
  else if (option == 3)
  {
    int start = 1;
    int limit = 1000;
    Queue* queue = new Queue();
    while (limit <= 100000)
    {
      for (int i = start; i <= limit; i++)
      {
        queue->enqueue(i);
      }
      start = limit + 1;
      limit = limit + 1000;
      clock_t before;
      clock_t after;
      before = clock();
      queue->enqueue(limit);
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "Enqueue took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds." << std::endl;
    }
  }
  else if (option == 4)
  {
    int start = 0;
    int limit = 1000;
    LinkedList* linkedlist = new LinkedList();
    while (limit <= 100000)
    {
      for (int i = start; i < limit; i++)
      {
        linkedlist->insert(i,i);
      }
      clock_t before;
      clock_t after;
      before = clock();
      linkedlist->getEntry(1);
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "GetEntry took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds in index 1." << std::endl;
      start = limit;
      limit = limit + 1000;
    }
  }
  else if (option == 5)
  { 
    int start = 0;
    int limit = 1000;
    LinkedList* linkedlist = new LinkedList();
    while (limit <= 100000)
    {
      for (int i = start; i < limit; i++)
      {
        linkedlist->insert(i,i);
      }
      clock_t before;
      clock_t after;
      before = clock();
      linkedlist->getEntry(limit-1);
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "GetEntry took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds in the last index." << std::endl;
      start = limit;
      limit = limit + 1000;
    }
  }
  else if (option == 6)
  {
    int start = 0;
    int limit = 1000;
    LinkedList* linkedlist = new LinkedList();
    while (limit <= 100000)
    {
      for (int i = start; i < limit; i++)
      {
        linkedlist->insert(i,i);
      }
      clock_t before;
      clock_t after;
      before = clock();
      for (int i = 0; i < limit; i++)
      {
        linkedlist->getEntry(i);
      }
      after = clock();
      clock_t difference = after - before;
      std::cout << std::fixed;
      std::cout << std::endl;
      std::cout << "GetEntry took " << (int)difference << " ticks and " << ((float)difference)/CLOCKS_PER_SEC << " seconds when it printed every index." << std::endl;
      start = limit;
      limit = limit + 1000;
    }
  }
}
void Executive::userRun()
{
  for (int i = 1; i <= 6; i++)
  {
    timeOps(i);
  }
}
