/* -----------------------------------------------------------------------------
 *
 * File Name: BrowserHistory.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the implementation of Browser History. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "BrowserHistory.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include <string>
#include <iostream>

BrowserHistory::BrowserHistory() 
{
  userCurrentPosition = 0;
  userHistory = new LinkedList<std::string>();
}

BrowserHistory::~BrowserHistory() 
{
  delete userHistory;
}

void BrowserHistory::navigateTo(std::string url) 
{
  userHistory->insert(userCurrentPosition, url);
  userCurrentPosition++;
  for (int i = (userHistory->length()-1); i >= userCurrentPosition; i--) 
  {
    userHistory->remove(i);
    if (i == userCurrentPosition) 
    {
      userCurrentPosition--;
      break;
    }
  }
}

void BrowserHistory::forward() 
{
  if (!(userCurrentPosition == userHistory->length())) 
  {
    userCurrentPosition++;
  }
}

void BrowserHistory::backward() 
{
  if (userCurrentPosition != 0) 
  {
    userCurrentPosition--;
  }
}

void BrowserHistory::printHistory()
{
  std:: cout << "Oldest" << std:: endl;
  std:: cout << "===========" << std:: endl;
  for (int i = 0; i < userHistory->length(); i++) 
  {
    std:: cout << userHistory->getEntry(i);
    if (i == (userCurrentPosition - 1)) 
    {
      std:: cout << "   <== current";
    }
    std:: cout << "\n";
  }
  std:: cout << "===========" << std:: endl;
  std:: cout << "Newest" << std:: endl;
  std:: cout << std:: endl;
}

std::string BrowserHistory::current() const 
{
  return (userHistory->getEntry(userCurrentPosition));
}

void BrowserHistory::copyCurrentHistory(ListInterface<std::string>& destination) 
{

}