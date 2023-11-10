/* -----------------------------------------------------------------------------
 *
 * File Name: BinarySearchTreeInterface.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will be the interface of the Binary Search Tree. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BinarySearchTreeInterface_h
#define BinarySearchTreeInterface_h
#include "Pokemon.h"

class BinarySearchTreeInterface
{
    public:
    virtual ~BinarySearchTreeInterface(){}
    virtual void add(Pokemon entry) = 0;
    virtual Pokemon search(int key) const = 0;
    virtual void remove(int key) = 0;
    virtual void visitPreOrder(void visit(Pokemon)) const = 0; 
    virtual void visitInOrder(void visit(Pokemon)) const = 0; 
    virtual void visitPostOrder(void visit(Pokemon)) const = 0; 
};
#endif