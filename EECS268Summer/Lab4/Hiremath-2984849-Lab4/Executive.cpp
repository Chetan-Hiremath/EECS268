/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 4
 * Description: This is the implementation of Executive class. 
 * Date: July 3, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Executive.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

Executive::Executive(std::string fileName)
{
  if (fileName == "input.txt")
  {
    userFileReader.open(fileName); 
  }
  else 
  {
    throw(std::runtime_error("Invalid file!"));
  }
  userHistory = new BrowserHistory();
}

Executive::~Executive()
{
  delete userHistory;
}

void Executive::navigate(std:: string url)
{
  try
  {
    userHistory->navigateTo(url); 
  }
  catch (std:: runtime_error& e)
  {
    std:: cout << "Navigate Failed.\"" << e.what() << "\" Error occured." << std:: endl;
  }
}

void Executive::printHistory()
{
  try
  {
    userHistory->printHistory(); 
  }
  catch (std:: runtime_error& e)
  {
    std:: cout << "Histort Print Failed.\"" << e.what() << "\" Error occured." << std:: endl;
  }
}

void Executive::forward()
{
  try
  {
    userHistory->forward(); 
  }
  catch (std:: runtime_error& e)
  {
    std:: cout << "Forward Failed.\"" << e.what() << "\" Error occured." << std:: endl;
  }
}

void Executive::backward()
{
  try
  {
    userHistory->backward(); 
  }
  catch (std:: runtime_error& e)
  {
    std:: cout << "Backward Failed.\"" << e.what() << "\" Error occured." << std:: endl;
  }
}

void Executive::readFile()
{
  std:: string userLine;
  std:: string userURL;
  while(userFileReader >> userLine)
  { 
    if (userLine == "NAVIGATE")
    {
      userFileReader >> userURL;
      navigate(userURL);
      continue;
    }
    if (userLine == "HISTORY")
    {
      printHistory();
      continue;
    }
    if (userLine == "FORWARD")
    {
      forward();
      continue;
    }
    if (userLine == "BACK")
    {
      backward();
      continue;
    }
    if (userLine == "EXIT")
    {  
      break;
    }
  }
}