/* -----------------------------------------------------------------------------
 *
 * File Name: ShapeContainer.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will define the variables and the functions of the Shapes. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef ShapeContainer_h
#define ShapeContainer_h
#include "Shape.h"
#include <string>
#include <stdexcept>
#include <iostream>

class ShapeContainer
{
    public:
    ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
    ~ShapeContainer();
    double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr.
    std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr.
    void add(Shape* shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr.
    void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete.
 
    private:
    Shape** m_arrayOfShapes;
    int m_size;
};
#endif 