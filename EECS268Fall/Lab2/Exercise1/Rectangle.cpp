/* -----------------------------------------------------------------------------
 *
 * File Name: Rectangle.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will provide the area of the Rectangle. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Rectangle.h"

Rectangle::Rectangle(double W, double H)
{
	userWidth = W;
	userHeight = H;
}
double Rectangle::area() const
{
	return(userWidth * userHeight);
}
string Rectangle::shapeName() const
{
	return("Rectangle");
}