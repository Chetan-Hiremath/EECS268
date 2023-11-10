/* -----------------------------------------------------------------------------
 *
 * File Name: BrowserHistory.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 4
 * Description: This is the header file for Browser History. 
 * Date: July 3, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BrowserHistory_h
#define BrowserHistory_h
#include "BrowserHistoryInterface.h"
#include "LinkedList.h"
#include <string>

class BrowserHistory: BrowserHistoryInterface
{
  private:
  int userCurrentPosition;
  LinkedList<std::string>* userHistory;

  public:
  /** 
  * Pre-Condition: None.
  * Post-Condition: Browser history is created.
  * Return Condition: Browser history will be returned.
  **/
  BrowserHistory();

  /** 
  * Pre-Condition: Browser history exists.
  * Post-Condition: It de-allocates the memory in the Browser History.
  * Return Condition: None.
  **/
  ~BrowserHistory();

  /** 
  * Pre-Condition: Browser History exists.
  * Post-Condition: It will navigate the browser history and add the url to the list.
  * Return Condition: None.
  **/
  void navigateTo(std::string url);

  /**
  * @pre: WebHistory exists
  * @post: Navigates forward on the list of URL's
  * @return: NA
  **/
  /** 
  * Pre-Condition: Web history exists.
  * Post-Condition: It navigates forward on the list.
  * Return Condition: None.
  **/
  void forward();

  /** 
  * Pre-Condition: Web history exists.
  * Post-Condition: It navigates backward on the list.
  * Return Condition: None.
  **/
  void backward();

  /** 
  * Pre-Condition: Web history exists.
  * Post-Condition: It finds the current url within the list.
  * Return Condition: It returns the current string of the position within the list.
  **/
  std::string current() const;

  /** 
  * Pre-Condition: Web history exists.
  * Post-Condition: It copies the current history.
  * Return Condition: None.
  **/
  void copyCurrentHistory(ListInterface<std::string>& destination);

  /** 
  * Pre-Condition: Web history exists.
  * Post-Condition: It prints the current history of the list.
  * Return Condition: None.
  **/
  void printHistory();
};
#endif