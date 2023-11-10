/* -----------------------------------------------------------------------------
 *
 * File Name: Triangle.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will define the variables and the functions of the Triangle. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Triangle_h
#define Triangle_h
#include "Shape.h"

using namespace std;

class Triangle : public Shape
{
        public:
	//Pre-Condition: It is called as a constructor.
	//Post-Condition: It sets a up new triangle object.
	//Return-Condition: None.
	Triangle(double B, double H);

	//Pre-Condition: It is called to give the triangle's area.
	//Post-Condition: None.
	//Return-Condition: It returns the triangle's area. 
	double area() const;

	//Pre-Condition: It is called to give the shape's name.
	//Post-Condition: None.
	//Return-Condition: It returns the name of the shape. 
	string shapeName() const;

        private:
	double userBase;
	double userHeight;
};
#endif