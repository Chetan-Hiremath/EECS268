/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment: EECS 268 Lab 7
 * Description: This program will run the Executive class and its choices. 
 * Date: July 23, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Executive.h"
#include "Pokemon.h"
#include <iostream>
#include <string>
#include <stdexcept>

Executive::Executive(std::string fileName)
{
  inputFile.open(fileName);
  if(validFile())
  {
    std::string name1;
    std::string name2;
    int id;
    copyCreated = false;
    version = 1;
    while (inputFile >> name1 >> id >> name2)
    {
      Pokemon pokemon(name1, id, name2);
      tree.add(pokemon);
    }
  }
  else
  {
    throw(std::runtime_error("ERROR: Invalid File!\n"));
  }

}
bool Executive::validFile()
{
  if(inputFile.is_open())
  {
    return true;
  }
  return false;
}
Executive::~Executive()
{
  
}
void Executive::printMenu()
{
  std::cout << "1) Search" << std::endl;
  std::cout << "2) Add" << std::endl;
  std::cout << "3) Copy" << std::endl;
  std::cout << "4) Remove" << std::endl;
  std::cout << "5) Print" << std::endl;
  std::cout << "6) Exit" << std::endl;
}
void Executive::userRun()
{
  int userChoice;
  do
  {
    printMenu();
    std::cout << "Enter the choice: ";
    std::cin >> userChoice;
    if (userChoice == 1)
    {
      std::cout << "Enter pokedex: ";
      int id;
      std::cin >> id;
      Pokemon pokemon;
      if (version == 1)
      {
        pokemon = tree.search(id);
        pokemon.printNames();
      }
      else
      {
        pokemon = copyTree.search(id);
        pokemon.printNames();
      }
    }
    else if (userChoice == 2)
    {
      std::cout << "Enter pokedex: ";
      int id;
      std::cin >> id;
      std::cout << "Enter American name of the Pokemon: ";
      std::string name1;
      std::cin >> name1;
      std::cout << "Enter Japanese name of the Pokemon: ";
      std::string name2;
      std::cin >> name2;
      Pokemon pokemon(name1, id, name2);
      if (version == 1)
      {
        tree.add(pokemon);
      }
      else
      {
        copyTree.add(pokemon);
      }
    }
    else if (userChoice == 3)
    {
      if (copyCreated)
      {
        throw(std::runtime_error("ERROR: Copy is already created!\n"));
      } 
      copyTree = tree;
      copyCreated = true;
      std::cout << "Which version do you want to see?: 1) Original OR 2) Copy ";
      std::cin >> version;
    }
    else if (userChoice == 4)
    {
      std::cout << "Enter pokedex: ";
      int id;
      std::cin >> id;
      Pokemon pokemon;
      if (version == 1)
      {
        tree.remove(id);
      }
      else
      {
        copyTree.remove(id);
      }
    }
    else if (userChoice == 5)
    {
      std::cout << "Enter pokedex: ";
      int id;
      std::cin >> id;
      Pokemon pokemon;
      std::cout << "1) Pre-Order" << std::endl;
      std::cout << "2) In-Order" << std::endl;
      std::cout << "3) Post-Order" << std::endl;
      std::cout << "Traversal order: ";
      int traversalChoice;
      std::cin >> traversalChoice;
      if (version == 1)
      {
        if (traversalChoice == 1)
        {
          tree.visitPreOrder(Pokemon::printNames);
        }
        if (traversalChoice == 2)
        {
          tree.visitInOrder(Pokemon::printNames);
        }
          if (traversalChoice == 3)
        {
          tree.visitPostOrder(Pokemon::printNames);
        }
      }
      else
      {
        if (traversalChoice == 1)
        {
          copyTree.visitPreOrder(Pokemon::printNames);
        }
        if (traversalChoice == 2)
        {
          copyTree.visitInOrder(Pokemon::printNames);
        }
          if (traversalChoice == 3)
        {
          copyTree.visitPostOrder(Pokemon::printNames);
        }
      }
    }
    else if (userChoice > 6 || userChoice < 1)
    {
      std::cout << "Invalid choice!" << std::endl;
    }
  }
  while(userChoice != 6);
}
