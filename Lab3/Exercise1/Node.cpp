/* -----------------------------------------------------------------------------
 *
 * File Name: Node.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 3
 * Description: This program will run the Node structure. 
 * Date: September 16, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Node.h"

Node::Node(char entry)
{
	m_entry = entry;
	m_next = nullptr;
}

char Node::getEntry() const
{
	return(m_entry);
}

void Node::setEntry(char entry)
{
	m_entry = entry;
}

Node* Node::getNext() const
{
	return(m_next);
}

void Node::setNext(Node* next)
{
	m_next = next;
}