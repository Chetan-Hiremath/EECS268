/* -----------------------------------------------------------------------------
 *
 * File Name: BNode.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will run the Binary Node class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "BNode.h"

BNode::BNode(Pokemon entry)
{
  m_entry = entry;
}
BNode::~BNode()
{
  
}
Pokemon BNode::getEntry()
{
  return m_entry;
}
BNode* BNode::getLeft()
{
  return m_left;
}
BNode* BNode::getRight()
{
  return m_right;
}
void BNode::setEntry(Pokemon entry)
{
  m_entry = entry;
}
void BNode::setLeft(BNode* bnode)
{
  m_left = bnode;
}
void BNode::setRight(BNode* bnode)
{
  m_right = bnode;
}

