/* -----------------------------------------------------------------------------
 *
 * File Name: Pokemon.h
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will define the variables and the functions of the Pokemon class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef Pokemon_h
#define Pokemon_h
#include <string>

class Pokemon
{
  private:
  int pokedex;
  std::string usName;
  std::string japName;

  public:
  Pokemon();
  Pokemon(std::string name1, int id, std::string name2);
  ~Pokemon();
  void printNames();
  static void printNames(Pokemon pokemon);
  void operator=(const Pokemon& rhs);
  bool operator==(const Pokemon& rhs);
  bool operator<(const Pokemon& rhs);
  bool operator>(const Pokemon& rhs);
  bool operator==(int key);
  bool operator<(int key);
  bool operator>(int key);
};
#endif