/* -----------------------------------------------------------------------------
 *
 * File Name: Shape.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will define the functions and connect itself to other files due to inheritance. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Shape_H
#define Shape_H
#include <string>
class Shape
{
   public:
   virtual double area() const = 0;
   virtual std::string shapeName() const = 0;
   virtual ~Shape() {}
};
#endif