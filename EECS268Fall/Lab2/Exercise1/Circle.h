/* -----------------------------------------------------------------------------
 *
 * File Name: Circle.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will define the variables and the functions of the Circle. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Circle_h
#define Circle_h
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
        public:
	//Pre-Condition: It is called as a constructor.
	//Post-Condition: It sets up a new circle object.
	//Return-Condition: None.
	Circle(double R);

	//Pre-Condition: It is called to give the circle's area.
	//Post-Condition: None.
	//Return-Condition: It returns the circle's area.
	double area() const;

	//Pre-Condition: It is called to give the shape's name.
	//Post-Condition: None.
	//Return-Condition: It returns the name of the shape. 
	string shapeName() const;

        private:
	double userRadius;

};
#endif