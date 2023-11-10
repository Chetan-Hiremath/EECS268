/* -----------------------------------------------------------------------------
 *
 * File Name: BNode.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will define the variables and the functions of the Binary Node class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BNode_h
#define BNode_h
#include "Pokemon.h"

class BNode
{
  private:
  Pokemon m_entry;
  BNode* m_left;
  BNode* m_right;

  public:
  BNode(Pokemon entry);
  ~BNode();
  Pokemon getEntry();
  BNode* getLeft();
  BNode* getRight();
  void setEntry(Pokemon entry);
  void setLeft(BNode* bnode);
  void setRight(BNode* bnode);
};
#endif