#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include <fstream>
#include "Map.h"

class Executive
{
  private:
  std::ifstream inputFile;
  Map* map;
  int startRow;
  int startCol;
  void navigateMap(int row, int col);
  void printMap();

  public:
  Executive(std::string fileName);
  ~Executive();
  bool validFile();
  void run();
};
#endif
