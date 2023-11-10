/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment : EECS 268 Lab 2
 * Description: This program will run the correct file for the Shape Interface. 
 * Date: September 9, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include <string>
#include <stdexcept>
#include "Executive.h"

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        std:: string userFilename;
        userFilename = argv[1];
        try
        {
            Executive exec(userFilename);
            exec.Run();
        }
        catch(std::runtime_error& rte)
        {
            std:: cout << rte.what() << std:: endl;
        }

    }
    else
    {
        std:: string userFilename;
        std:: cout << "file: ";
        std:: cin >> userFilename;
        try
        {
            Executive exec(userFilename);
            exec.Run();
        }
        catch(std::runtime_error& rte)
        {
            std:: cout << rte.what() << std:: endl;
        }
    }
}