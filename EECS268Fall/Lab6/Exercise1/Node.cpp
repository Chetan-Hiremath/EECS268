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