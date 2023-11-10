/* -----------------------------------------------------------------------------
 *
 * File Name: Circle.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will provide the area of the Circle. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Circle.h"

Circle::Circle(double R)
{
	userRadius = R;
}
double Circle::area() const
{
	return(userRadius * userRadius * 3.14159);
}
string Circle::shapeName() const
{
	return("Circle");
}