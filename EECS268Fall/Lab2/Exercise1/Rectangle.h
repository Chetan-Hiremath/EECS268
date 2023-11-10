/* -----------------------------------------------------------------------------
 *
 * File Name: Rectangle.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will define the variables and the functions of the Rectangle. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Rectangle_h
#define Rectangle_h
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
        public:
	//Pre-Condition: It is called as a constructor.
	//Post-Condition: It sets up a new rectangle object.
	//Return-Condition: None.
	Rectangle(double W, double H);

	//Pre-Condition: It is called to give the rectangle's area.
	//Post-Condition: None.
	//Return-Condition: It returns the rectangle's area.
	double area() const;

	//Pre-Condition: It is called to give the shape's name.
	//Post-Condition: None.
	//Return-Condition: It returns the name of the shape.
	string shapeName() const;
        
        private:
	double userWidth;
	double userHeight;
};
#endif