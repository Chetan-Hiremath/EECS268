/* -----------------------------------------------------------------------------
 *
 * File Name: ShapeContainer.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will create arrays of Shapes. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "ShapeContainer.h"
#include "Shape.h"
#include <iostream>
#include <stdexcept>

ShapeContainer::ShapeContainer(int size)
{
	m_arrayOfShapes = new Shape* [size];
	m_size = size;
        for (int i = 0; i < m_size; i++) 
        {
	     m_arrayOfShapes[i] = nullptr;
	}
}
ShapeContainer::~ShapeContainer()
{
	for (int i = 0; i < m_size; i++) 
        {
	     delete m_arrayOfShapes[i];
	}
	delete m_arrayOfShapes;
}
double ShapeContainer::area(int index) const
{
	if (index <= m_size)
	{
	     return(m_arrayOfShapes[index]->area());
	}
	else
	{
	    throw(std::runtime_error("Index has null pointer."));
	}
}
std:: string ShapeContainer::shapeName(int index) const
{
	if (index <= m_size)
	{
	    return(m_arrayOfShapes[index]->shapeName());
	}
	else
	{
	    throw(std::runtime_error("Index has null pointer."));
	}
}
void ShapeContainer::add(Shape* shapePtr, int index)
{
	if (shapePtr == nullptr)
	{
	    throw(std::runtime_error("Pointer passed to ADD is null!"));
	}
	else if(index > m_size)
	{
	    throw(std::runtime_error("Index out of range!"));
	}
	else
	{
	    m_arrayOfShapes[index] = shapePtr;
	}
}
void ShapeContainer::remove(int index)
{
	if (index > m_size)
	{
	    throw(std::runtime_error("Index out of range!"));
	}
	else if (m_arrayOfShapes[index] == nullptr)
	{
	    throw(std::runtime_error("Nothing to remove!"));
	}
	else
	{
	    delete m_arrayOfShapes[index];
	}
}