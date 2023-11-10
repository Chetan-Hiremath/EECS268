#include "BoardGames.h"
bool BoardGames:: setGameName(std::string Name)
{
GameName = Name;
return(true);
}
bool BoardGames:: setGRating(double Rating)
{
GRating = Rating;
return(true);
}
bool BoardGames:: setPRating(double Rating2)
{
PRating = Rating2;
return(true);
}
bool BoardGames:: setGYear(int Year)
{
GYear = Year;
return(true);
}
bool BoardGames:: setMinPlayers(int Players)
{
MinPlayers = Players;
return(true);
}
bool BoardGames:: setMinPlayTime(int PlayTime)
{
MinPlayTime = PlayTime;
return(true);
}
std::string BoardGames::getGameName()
{
return(GameName);
}
double BoardGames::getGRating()
{
return(GRating);
}
double BoardGames::getPRating()
{
return(PRating);
}
int BoardGames::getGYear()
{
return(GYear);
}
int BoardGames::getMinPlayers()
{
return(MinPlayers);
}
int BoardGames::getMinPlayTime()
{
return(MinPlayTime);
}




