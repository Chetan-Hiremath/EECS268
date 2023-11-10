/* -----------------------------------------------------------------------------
 *
 * File Name: StackTester.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 3
 * Description: This program will run the tests' results for the Test Mode. 
 * Date: September 16, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include "StackTester.h"
#include "StackOfChars.h"
StackTester:: StackTester()
{}
void StackTester:: runTests()
{
 test01();
 test02();
 test03();
 test04();
}
void StackTester:: test01()
{
   std:: cout <<"Test 1: New stack is empty: ";
   StackOfChars stack;
   if(stack.isEmpty())
   {
       std:: cout << "PASSED" << std:: endl;
   }
   else
   {
       std:: cout << "FAILED" << std:: endl;
   }
}
void StackTester:: test02()
{
  std:: cout << "Test 2: Push on empty stack makes it non-empty: ";
  StackOfChars stack;
  if(stack.isEmpty())
  {
    std:: cout << "FAILED" << std:: endl;
  }
  else
  {
    std:: cout << "PASSED" << std:: endl;
  }
}
void StackTester:: test03()
{
  std:: cout << "Test 3: Popping all all elements makes stack empty: ";
  StackOfChars stack;
  stack.pop();
  if(stack.isEmpty())
  {
      std:: cout << "PASSED" << std:: endl;
  }
  else
  {
      std:: cout << "FAILED" << std:: endl;
  }
}
void StackTester:: test04()
{
  std:: cout << "Test 4: Copy constructor copies all elements in correct order: ";
  StackOfChars stack;
  StackOfChars stack2(stack);
  while(!stack.isEmpty() && !stack2.isEmpty())
  {
     if(stack.peek() != stack2.peek())
     {
       std:: cout << "FAILED" << std:: endl;
     }
     stack.pop();
     stack2.pop();
  }
  if(!stack.isEmpty())
  {
       std:: cout << "FAILED" << std:: endl;
  }
  else if(!stack2.isEmpty())
  {
       std:: cout << "FAILED" << std:: endl;
  }
  else
  {
       std:: cout << "PASSED" << std:: endl;
  }
}
