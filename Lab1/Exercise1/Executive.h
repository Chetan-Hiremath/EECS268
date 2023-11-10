#ifndef Executive_H
#define Executive_H
#include "BoardGames.h"
#include <string>
class Executive
{
public:
Executive(std::string FileName);
void Run();
void userMenu();
void userGameRecord(BoardGames gRecord);
 ~Executive();
private:
BoardGames* arr = nullptr;
int userGameCount = 0;
};
#endif