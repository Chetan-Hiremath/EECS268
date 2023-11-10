/* -----------------------------------------------------------------------------
 *
 * File Name: BoardGames.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 1
 * Description: This program will define the functions for the Board Games' information. 
 * Date: June 12, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BoardGames_H
#define BoardGames_H
#include <string>
class BoardGames
{
public:
bool setGameName(std::string userName);
bool setGRating(double userRating);
bool setPRating(double userRating2);
bool setGYear(int userYear);
bool setMinPlayers(int userPlayers);
bool setMinPlayTime(int userPlayTime);
std::string getGameName();
double getGRating();
double getPRating();
int getGYear();
int getMinPlayers();
int getMinPlayTime();
private:
std::string GameName = " ";
double GRating = 0;
double PRating = 0;
int GYear = 0;
int MinPlayers = 0;
int MinPlayTime = 0;
};
#endif