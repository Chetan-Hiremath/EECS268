/* -----------------------------------------------------------------------------
 *
 * File Name: ShapeContainer.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will define the variables and the functions of the Shapes. 
 * Date: June 25, 2021
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
    //Pre-Condition: It is called as a constructor.
    //Post-Condition: It sets up a new rectangle object.
    //Return-Condition: None.
    ShapeContainer(int size); 

    //Pre-Condition: It is called as a constructor.
    //Post-Condition: It sets up a new rectangle object.
    //Return-Condition: None.
    ~ShapeContainer();
    
    //Pre-Condition: It is called as a constructor.
    //Post-Condition: It sets up a new rectangle object.
    //Return-Condition: None.
    double area(int index) const; 
   
    //Pre-Condition: It is called to give the shape's name.
    //Post-Condition: None.
    //Return-Condition: It returns the name of the shape. 
    std:: string shapeName(int index) const;
 
    //Pre-Condition: It is called as a constructor.
    //Post-Condition: It sets up a new rectangle object.
    //Return-Condition: None.
    void add(Shape* shapePtr, int index); 
    
    //Pre-Condition: It is called as a constructor.
    //Post-Condition: It sets up a new rectangle object.
    //Return-Condition: None.
    void remove(int index); 
 
    private:
    Shape** m_arrayOfShapes;
    int m_size;
};
#endif 