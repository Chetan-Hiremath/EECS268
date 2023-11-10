#include "Executive.h"
#include <iostream>
#include <string>

Executive::Executive(std::string userPass)
{
  userWord = userPass;
  for (unsigned int i = 0; i < userWord.length(); i++)
  {
    userOutput(userWord.length(), 0, " ", i);
  }
}
void Executive::userOutput(int userDistance, int userPlacement, std:: string userPass, int userAvoidingLetter)
{
  int userPlace = userPlacement;
  std:: string userPassing = userPass;
  for (int i = 0; i < (userDistance - userPlace); i++)
  {
    userPassing.insert((userPlace - i), 1, userWord.at(userPlace));
    std:: cout << userPassing << std:: endl;
    userPlace++;
    userOutput(userDistance, userPlace, userPassing, i);
  }
}
