#include "Executive.h"
#include <iostream> 
#include <string>

int main() 
{
  std:: string userWord;
  std:: cout << "Word: ";
  std:: cin >> userWord;
  Executive exec(userWord);
}