/* -----------------------------------------------------------------------------
 *
 * File Name: BoardGames.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 1
 * Description: This program will return the values for each function to the Executive class. 
 * Date: June 12, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "BoardGames.h"
bool BoardGames:: setGameName(std::string userName)
{
    GameName = userName;
    return(true);
}
bool BoardGames:: setGRating(double userRating)
{
    GRating = userRating;
    return(true);
}
bool BoardGames:: setPRating(double userRating2)
{
    PRating = userRating2;
    return(true);
}
bool BoardGames:: setGYear(int userYear)
{
    GYear = userYear;
    return(true); 
}
bool BoardGames:: setMinPlayers(int userPlayers)
{
    MinPlayers = userPlayers;
    return(true);
}
bool BoardGames:: setMinPlayTime(int userPlayTime)
{
    MinPlayTime = userPlayTime;
    return(true);
}
std::string BoardGames::getGameName()
{
    return(GameName);
}
double BoardGames::getGRating()
{
    return(GRating);
}
double BoardGames::getPRating()
{
    return(PRating);
}
int BoardGames::getGYear()
{
    return(GYear);
}
int BoardGames::getMinPlayers()
{
    return(MinPlayers);
}
int BoardGames::getMinPlayTime()
{
    return(MinPlayTime);
}




