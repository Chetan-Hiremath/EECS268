/* -----------------------------------------------------------------------------
 *
 * File Name: Pokemon.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will run the Pokemon class. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Pokemon.h"
#include <iostream>
#include <string>

Pokemon::Pokemon()
{
  
}
Pokemon::Pokemon(std::string name1, int id, std::string name2)
{
  pokedex = id;
  usName = name1;
  japName = name2;
}
Pokemon::~Pokemon()
{
  
}
void Pokemon::printNames()
{
  std::cout << "American name: " << usName << std::endl;
  std::cout << "Japanese name: " << japName << std::endl;
}
void Pokemon::printNames(Pokemon pokemon)
{
  std::cout << "Pokedex: " << pokemon.pokedex << std::endl;
  std::cout << "American name: " << pokemon.usName << std::endl;
  std::cout << "Japanese name: " << pokemon.japName << std::endl;
}
void Pokemon::operator=(const Pokemon& rhs)
{
  pokedex = rhs.pokedex;
  usName = rhs.usName;
  japName = rhs.japName;
}
bool Pokemon::operator==(const Pokemon& rhs)
{
  if (pokedex == rhs.pokedex)
  {
    return true;
  }
  return false;
}
bool Pokemon::operator<(const Pokemon& rhs)
{
  if (pokedex < rhs.pokedex)
  {
    return true;
  }
  return false;
}
bool Pokemon::operator>(const Pokemon& rhs)
{
  if (pokedex > rhs.pokedex)
  {
    return true;
  }
  return false;
}
bool Pokemon::operator==(int key)
{
  if (pokedex == key)
  {
    return true;
  }
  return false;
}
bool Pokemon::operator<(int key)
{
  if (pokedex < key)
  {
    return true;
  }
  return false;
}
bool Pokemon::operator>(int key)
{
  if (pokedex > key)
  {
    return true;
  }
  return false;
}