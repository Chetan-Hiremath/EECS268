/* -----------------------------------------------------------------------------
 *
 * File Name: BST.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will run the Binary Search Tree class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "BST.h"
#include <stdexcept>

BST::BST()
{
  m_root = nullptr;
}
BST::~BST()
{
  
}
void BST::doCopy(BNode* jumper)
{
  if (jumper != nullptr)
  {
    add(jumper->getEntry());
    doCopy(jumper->getLeft());
    doCopy(jumper->getRight());
  }
}
void BST::operator=(const BST& rhs)
{
  BNode* jumper = rhs.m_root;
  doCopy(jumper);
}
void BST::add(Pokemon entry)
{
  if (m_root == nullptr)
  {
    m_root = new BNode(entry);
  }
  else
  {
    doAdd(entry, m_root);
  }
}
void BST::doAdd(Pokemon entry, BNode* subtree)
{
  if (subtree->getEntry() == entry)
  {
    throw(std::runtime_error("ERROR: Entry is already present in the tree!\n"));
  }
  else if(subtree->getEntry() > entry)
  {
    if (subtree->getLeft() != nullptr)
    {
      doAdd(entry, subtree->getLeft());
    }
    else
    {
      BNode* target = new BNode(entry);
      subtree->setLeft(target);
    }
  }
  else if(subtree->getEntry() < entry)
  {
    if (subtree->getRight() != nullptr)
    {
      doAdd(entry, subtree->getRight());
    }
    else
    {
      BNode* target = new BNode(entry);
      subtree->setRight(target);
    }
  }
}
Pokemon BST::search(int key) const
{
  if (m_root == nullptr)
  {
    throw(std::runtime_error("ERROR: Tree doesn't exist!\n"));
  }
  else 
  {
    return doSearch(key, m_root);
  }
}
Pokemon BST::doSearch(int key, BNode* subtree) const
{
  if (subtree == nullptr)
  {
    throw(std::runtime_error("ERROR: Pokemon is not present in the records!\n"));
  }
  else if (subtree->getEntry() == key)
  {
    return subtree->getEntry();
  }
  else if (subtree->getEntry() > key)
  {
    return doSearch(key, subtree->getLeft());
  }
  else if (subtree->getEntry() < key)
  {
    return doSearch(key, subtree->getRight());
  }
}
void BST::visitPreOrder(void visit(Pokemon)) const
{
  visitPre(m_root, visit);
}
void BST::visitPre(BNode* subtree, void visit(Pokemon)) const
{
  visit(subtree->getEntry());
  if (subtree->getLeft() != nullptr)
  {
    visitPre(subtree->getLeft(), visit);
  }
  if (subtree->getRight() != nullptr)
  {
    visitPre(subtree->getRight(), visit);
  }
}
void BST::visitInOrder(void visit(Pokemon)) const 
{
  visitIn(m_root, visit);
}
void BST::visitIn(BNode* subtree, void visit(Pokemon)) const
{
  if (subtree->getLeft() != nullptr)
  {
    visitIn(subtree->getLeft(), visit);
  }
  visit(subtree->getEntry());
  if (subtree->getRight() != nullptr)
  {
    visitIn(subtree->getRight(), visit);
  }
}
void BST::visitPostOrder(void visit(Pokemon)) const
{
  visitPost(m_root, visit);
}
void BST::visitPost(BNode* subtree, void visit(Pokemon)) const
{
  if (subtree->getLeft() != nullptr)
  {
    visitPost(subtree->getLeft(), visit);
  }
  if (subtree->getRight() != nullptr)
  {
    visitPost(subtree->getRight(), visit);
  }
  visit(subtree->getEntry());
}
void BST::remove(int key)
{
  if (m_root == nullptr)
  {
    throw(std::runtime_error("ERROR: The tree is empty!"));
  }
  else
  {
    doRemove(key, m_root, m_root);
  }
}
void BST::doRemove(int key, BNode* subtree, BNode* parent)
{ 
  if (subtree == nullptr)
  {
    throw(std::runtime_error("ERROR: Pokemon is not present in the records!\n"));
  }
  else if (subtree->getEntry() == key)
  {
    if (subtree->getLeft() == nullptr && subtree->getRight() == nullptr)
    {
      if (parent->getLeft() == subtree)
      {
        parent->setLeft(nullptr);
      }
      else if (parent->getRight() == subtree)
      {
        parent->setRight(nullptr);
      }
      delete subtree;
    }
    else if (subtree->getLeft() != nullptr || subtree->getRight() != nullptr)
    {
      if (subtree->getRight() != nullptr)
      {
        if (parent->getRight() == subtree)
        {
          parent->setRight(subtree->getRight());
          delete subtree;
        }
        else if (parent->getLeft() == subtree)
        {
          parent->setLeft(subtree->getRight());
          delete subtree;        
        }
      }
      else if (subtree->getLeft() != nullptr)
      {
        if (parent->getRight() == subtree)
        {
          parent->setRight(subtree->getLeft());
          delete subtree;
        }
        else if (parent->getLeft() == subtree)
        {
          parent->setLeft(subtree->getLeft());
          delete subtree;        
        }
      }   
    }
    else if (subtree->getLeft() != nullptr && subtree->getRight() != nullptr)
    {
      BNode* leftChild = subtree->getLeft();
      while (leftChild->getRight() != nullptr)
      {
        leftChild = leftChild->getRight();
      }
      subtree->setEntry(leftChild->getEntry());
      delete leftChild;
    }
  }
  else if (subtree->getEntry() > key)
  {
    doRemove(key, subtree->getLeft(), subtree);
  }
  else if (subtree->getEntry() < key)
  {
    doRemove(key, subtree->getRight(), subtree);
  }
}