/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 1
 * Description: This program will define the functions in the Executive class to send the information for the Board Games. 
 * Date: June 12, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Executive_H
#define Executive_H
#include "BoardGames.h"
#include <string>
class Executive
{
public:
Executive(std::string userFileName);
void Run();
void userMenu();
void userGameRecord(BoardGames gRecord);
~Executive();
private:
BoardGames* arr = nullptr;
int userGameCount = 0;
};
#endif