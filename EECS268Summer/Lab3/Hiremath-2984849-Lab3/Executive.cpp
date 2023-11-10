/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 3
 * Description: This program will run the choices based on the file. 
 * Date: June 25, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Executive.h"
#include "ShapeContainer.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

Executive::Executive(string file)
{
	userFilename = file;
        userShapes = nullptr;
        userSize = 0;
}
Executive::~Executive()
{
	delete userShapes;
}
void Executive:: Run()
{
	ifstream inFile;
	inFile.open(userFilename);
	string userCommand;
	if (inFile.is_open())
	{
	  inFile >> userSize;
	  userShapes = new ShapeContainer(userSize);
	  inFile >> userCommand;
	  while (userCommand != "EXIT")
	  {
	    if (userCommand == "ADD")
            {
	      int userIndex = 0;
	      string userShape;
	      inFile >> userIndex;
              inFile >> userShape;
	      if (userShape == "CIR")
	      {
		double userRadius = 0.0;
		inFile >> userRadius;
		Shape* circ = new Circle(userRadius);
		try
		{
		  userShapes->add(circ, userIndex);
		}
		catch (runtime_error & rte)
		{
		  std:: cout << rte.what() << std:: endl;
		}
	      }
	      else if (userShape == "TRI")
	      {
		double userHeight = 0.0;
		double userBase = 0.0;
		inFile >> userBase >> userHeight;
		Shape* trig = new Triangle(userBase, userHeight);
		try
		{
		  userShapes->add(trig, userIndex);
		}
		catch (runtime_error & rte)
	        {
		  std:: cout << rte.what() << std:: endl;
		}
	      }
	      else if (userShape == "REC")
	      {
	        double userWidth = 0.0;
		double userLength = 0.0;
		inFile >> userWidth >> userLength;
		Shape* rect = new Rectangle(userWidth, userLength);
	        try
	        {
		  userShapes->add(rect, userIndex);
		}
		catch (runtime_error& rte)
		{
		  std:: cout << rte.what() << std:: endl;
		}
	      }
	    }
	    else if (userCommand == "DELETE")
	    {
	      int userIndex;
	      inFile >> userIndex;
	      try
	      {
	        userShapes->remove(userIndex);
	      }
	      catch (runtime_error & rte)
	      {
		std:: cout << rte.what() << std:: endl;
	      }
	    }
	    else if (userCommand == "PRINT")
	    {
	      int userIndex = 0;
	      inFile >> userIndex;
	      std:: cout << "Shape at index " << userIndex << ": ";
	      if (userIndex > userSize)
	      {
		std:: cout << "It does not exist!" << std:: endl;
	      }
	      else
	      {
		std:: cout << userShapes->shapeName(userIndex)<<" area = ";
		std:: cout << userShapes->area(userIndex) << std:: endl;
	      }
	    }
	    inFile >> userCommand;
          }
	}
	else
	{
          throw(std:: runtime_error("Invalid File!"));
	}
}