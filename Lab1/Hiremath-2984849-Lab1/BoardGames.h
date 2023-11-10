#ifndef BoardGames_H
#define BoardGames_H
#include <string>
class BoardGames
{
public:
bool setGameName(std::string Name);
bool setGRating(double Rating);
bool setPRating(double Rating2);
bool setGYear(int Year);
bool setMinPlayers(int Players);
bool setMinPlayTime(int PlayTime);
std::string getGameName();
double getGRating();
double getPRating();
int getGYear();
int getMinPlayers();
int getMinPlayTime();
private:
std::string GameName = " ";
double GRating = 0;
double PRating = 0;
int GYear = 0;
int MinPlayers = 0;
int MinPlayTime = 0;
};
#endif