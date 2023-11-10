#include "Map.h"
Map::Map(int row, int col)
{
  rowSize = row;
  colSize = col;
  arr = new char*[rowSize];
  for(int i = 0; i < rowSize; i++)
  {
    arr[i] = new char[colSize];
  }
  for(int i = 0; i < rowSize; i++)
  {
    for(int j = 0; j < colSize; j++)
    {
      arr[i][j];
    }
  }
}

Map::~Map()
{
  delete[] arr;
}

void Map::setMapContent(int row, int col, char val)
{
  arr[row][col]= val;
}

char Map::getMapContent(int row, int col) const
{
  return(arr[row][col]);
}

int Map::getRowSize() const
{
  return(rowSize);
}

int Map::getColumnSize() const
{
  return(colSize);
}