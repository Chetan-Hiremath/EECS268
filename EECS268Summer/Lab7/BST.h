/* -----------------------------------------------------------------------------
 *
 * File Name: BST.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will define the variables and the functions of the Binary Search Tree class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BST_h
#define BST_h
#include "BinarySearchTreeInterface.h"
#include "BNode.h"

class BST: public BinarySearchTreeInterface
{
  private:
  BNode* m_root;
  void doAdd(Pokemon entry, BNode* subtree);
  Pokemon doSearch(int key, BNode* subtree) const;
  void doCopy(BNode* jumper);
  void doRemove(int key, BNode* subtree, BNode* parent);
  void visitPre(BNode* subtree, void visit(Pokemon)) const;
  void visitIn(BNode* subtree, void visit(Pokemon)) const;
  void visitPost(BNode* subtree, void visit(Pokemon)) const;

  public:
  BST();
  ~BST();
  void operator=(const BST& rhs);
  void add(Pokemon entry);
  Pokemon search(int key) const;
  void remove(int key);
  void visitPreOrder(void visit(Pokemon)) const; 
  void visitInOrder(void visit(Pokemon)) const; 
  void visitPostOrder(void visit(Pokemon)) const;
};
#endif