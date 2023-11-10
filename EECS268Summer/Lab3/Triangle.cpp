/* -----------------------------------------------------------------------------
 *
 * File Name: Triangle.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will provide the area of the Triangle. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Triangle.h"

Triangle::Triangle(double B, double H)
{
	userBase = B;
	userHeight = H;
}
double Triangle::area() const
{
	return(0.5 * userBase * userHeight);
}
string Triangle::shapeName() const
{
	return("Triangle");
}