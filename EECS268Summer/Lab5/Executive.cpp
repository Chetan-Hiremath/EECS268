#include "Executive.h"
#include <iostream>
#include <stdexcept>
#include <string>

Executive::Executive(std::string fileName)
{
  inputFile.open(fileName);
  if(validFile())
  {
    int row;
    int col;
    inputFile >> row;
    inputFile >> col;
    if(row < 1 || col < 1)
    {
      throw(std::runtime_error("ERROR: Row and Column sizes must be greater than or equal to 1"));
    }
    inputFile >> startRow;
    inputFile >> startCol;
    if(startRow < 0 || startRow >= row || startCol < 0 || startCol >= col)
    {
       throw(std::runtime_error("ERROR: Start positions must be in the range"));
    }
    map = new Map(row, col);
    char val;
    for(int i=0; i < row; i++)
    {
      for(int j=0; j < row; j++)
      {
        inputFile >> val;
        map->setMapContent(i, j, val);
      }
    }
   }
   else
   {
      throw(std::runtime_error("ERROR: Invalid File!"));
   }
}
Executive::~Executive()
{
  inputFile.close();
}
bool Executive::validFile()
{
  if(inputFile.is_open())
  {
    return true;
  }
  else
  {
    return false;
  }
}
void Executive::navigateMap(int row, int col)
{
  if(map->getMapContent(row,col) == 'S')
  {
    map->setMapContent(row,col,'B');
  }
  else if(map->getMapContent(row,col) == '@')
  {
    map->setMapContent(row,col,'@');
  }
  if(row-1 >= 0 && (map->getMapContent(row-1,col) == 'S' || map->getMapContent(row-1,col) == '@'))
  {
    navigateMap(row-1,col);
  }
  if(col+1 < map->getColumnSize() && (map->getMapContent(row,col+1) == 'S' || map->getMapContent(row,col+1) == '@'))
  {
    navigateMap(row,col+1);
  }
  if(row+1 < map->getRowSize() && (map->getMapContent(row+1,col) == 'S' || map->getMapContent(row+1,col) == '@'))
  {
    navigateMap(row+1,col);
  }
  if(col-1 >= 0 && (map->getMapContent(row,col-1) == 'S' || map->getMapContent(row,col-1) == '@'))
  {
    navigateMap(row,col-1);
  }
}
void Executive::printMap()
{
  for(int i = 0; i < map->getRowSize(); i++)
  {
    std:: cout << "\n";
    for(int j = 0; j < map->getColumnSize(); j++)
    {
      std:: cout << map->getMapContent(i,j) << "\t";
    }
  }
 std:: cout << std:: endl;
}
void Executive::run()
{
  navigateMap(startRow,startCol);
  printMap();
}