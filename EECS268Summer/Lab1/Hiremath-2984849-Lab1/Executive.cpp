/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 1
 * Description: This program will send the information of the Board Games to the main program. 
 * Date: June 12, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Executive.h"
#include "BoardGames.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string userFileName)
{
   std::ifstream inFile;
   if (userFileName == "input.txt")
   {
      inFile.open(userFileName);
      inFile >> userGameCount;
      arr = new BoardGames[userGameCount];
      std::string GameName = " ";
      double GRating = 0;
      double PRating = 0;
      int GYear = 0;
      int MinPlayers = 0;
      int MinPlayTime = 0;
      for (int i = 0; i < userGameCount; i++)
      {
         inFile >> GameName;
         inFile >> GRating;
         inFile >> PRating;
         inFile >> GYear;
         inFile >> MinPlayers;
         inFile >> MinPlayTime;
         arr[i].setGameName(GameName);
         arr[i].setGRating(GRating); 
         arr[i].setPRating(PRating);
         arr[i].setGYear(GYear);  
         arr[i].setMinPlayers(MinPlayers);  
         arr[i].setMinPlayTime(MinPlayTime);       
      }
   }
   else if (userFileName != "input.txt")
   {
     std:: cout << "Wrong file! Goodbye!" << std:: endl;
     exit(0);
   }
}
Executive::~Executive() 
{
  delete [] arr;
}
void Executive::userGameRecord(BoardGames gRecord)
{ 
std:: cout << gRecord.getGameName() << "(" << gRecord.getGYear() << ")" << "[GR: " << gRecord.getGRating() << ", PR: " << gRecord.getPRating() << ", MP: " << gRecord.getMinPlayers() << ", MT: " << gRecord.getMinPlayTime() << "]" << std:: endl;
}
void Executive::userMenu()
{
std:: cout << "1) Print all games and their records." << std:: endl;
std:: cout << "2) Print all games and their records base on the chosen year." << std:: endl;
std:: cout << "3) Print all games and their records based on the ranking range." << std:: endl;
std:: cout << "4) Print all games and their records based on the difference of the people's ratings and Dr. Gibbons's ratings." << std:: endl;
std:: cout << "5) Print all games and their records based on the play time in minutes." << std:: endl;
std:: cout << "6) Exit." << std:: endl;
std:: cout << "Enter the choice: "; 
}
void Executive::Run()
{
  int userChoice = 0;
  do
  {
   userMenu();
   std:: cin >> userChoice;
   if (userChoice == 1)
   {
     for (int i = 0; i < userGameCount; i++)
     {
       userGameRecord(arr[i]);
     }
   }
   else if (userChoice == 2)
   {
     int userYear = 0;
     int userCounter = 0;
     std:: cout << "Enter a year: ";
     std:: cin >> userYear;
     for (int i = 0; i < userGameCount; i++)
     {
       if (arr[i].getGYear() == userYear)
       { 
         userCounter++;
         userGameRecord(arr[i]);
       }
     }
     if (userCounter == 0)
     {
       std:: cout << "There are no games in this chosen year!" << std:: endl;
     }
    }
   else if (userChoice == 3)
   {
     double userRating1 = 0;
     double userRating2 = 0;
     int userCounter = 0;
     std:: cout << "Enter the first value for the ranking range: ";
     std:: cin >> userRating1;
     std:: cout << "Enter the second value for the ranking range: ";
     std:: cin >> userRating2;
     for (int i = 0; i < userGameCount; i++)
     {
       if (arr[i].getGRating() >= userRating1 && arr[i].getGRating() <= userRating2)
       {
         userCounter++;
         userGameRecord(arr[i]);
       }
     }
     if (userCounter == 0)
     {
       std:: cout << "There are no games in this ranking range!" << std:: endl;
     }
   }
   else if (userChoice == 4)
   {
     double userRange = 0;
     int userCounter = 0;
     double userDifference1 = 0;
     double userDifference2 = 0;
     std:: cout << "Enter a range to see whether the people and Dr. Gibbons disagree due to their ratings: ";
     std:: cin >> userRange;
     for (int i = 0; i < userGameCount; i++)
     {
       userDifference1 = (arr[i].getPRating() - arr[i].getGRating());
     }
     for (int i = 0; i < userGameCount; i++)
     {
       userDifference2 = (arr[i].getGRating() - arr[i].getPRating());
     }
     for (int i = 0; i < userGameCount; i++)
     {
       if (userDifference1 >= userRange)
       {
         userCounter++;
         userGameRecord(arr[i]);
       }
     }
     for (int i = 0; i < userGameCount; i++)
     {
       if (userDifference2 <= userRange)
       {
         userCounter++;
         userGameRecord(arr[i]);
       }
     }
     if (userCounter == 0)
     {
       std:: cout << "There are no games in this ratings' difference or the chosen range!" << std:: endl;
     }
   } 
   else if (userChoice == 5)
   {
     int userPlayTime = 0;
     int userCounter = 0;
     std:: cout << "Enter the play time in minutes: ";
     std:: cin >> userPlayTime;
     for (int i = 0; i < userGameCount; i++)
     {
       if (arr[i].getMinPlayTime() <= userPlayTime)
       {
         userCounter++;
         userGameRecord(arr[i]);
       }
     } 
     if (userCounter == 0)
     {
       std:: cout << "There are no games in this chosen time!" << std:: endl;
     }
   }
   else if (userChoice <= 0 || userChoice > 6)
   {
     std:: cout << "Invalid Choice!" << std:: endl;
   }
  } while (userChoice != 6);
}