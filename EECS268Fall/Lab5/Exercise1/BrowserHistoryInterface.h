/* -----------------------------------------------------------------------------
 *
 * File Name: BrowserHistoryInterface.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 5
 * Description: This is the header file for Browser History Interface. 
 * Date: October 5, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BrowserHistoryInterface_h
#define BrowserHistoryInterface_h

#include "ListInterface.h"
#include <string>

class BrowserHistoryInterface
{
  public:
  /** 
    * Pre-Condition: None.
    * Post-Condition: The memory is allocated by the class.
    * Return Condition: None.
  **/
  virtual ~BrowserHistoryInterface(){} 

  /** 
    * Pre-Condition: None.
    * Post-Condition: The browser navigates to the url.
    * Return Condition: None.
  **/
  virtual void navigateTo(std::string url) = 0;

  /** 
    * Pre-Condition: None.
    * Post-Condition: The browser navigates forward in the history.
    * Return Condition: None.
  **/
  virtual void forward() = 0;

  /** 
    * Pre-Condition: None.
    * Post-Condition: The browser navigates backward in the history.
    * Return Condition: None.
  **/
  virtual void backward() = 0;

  /** 
    * Pre-Condition: None.
    * Post-Condition: None.
    * Return Condition: It returns the current url.
  **/
  virtual std::string current() const = 0;

  /** 
    * Pre-Condition: None.
    * Post-Condition: The list will be cleared, then the current browser history is copied into the list.
    * Return Condition: It will return true if the stack is empty. If not, then it will return false.
  **/
  virtual void copyCurrentHistory(ListInterface<std::string>& destination) = 0;

};
#endif