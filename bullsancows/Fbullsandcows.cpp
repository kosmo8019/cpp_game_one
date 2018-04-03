#include "Fbullsandcows.h"


FBullCowGame::FBullCowGame(){ 	Reset(); }   //konstruktor

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const { return false; }



void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	int MyCurrentTry = 1;
	int MyMaxTries = MAX_TRIES;
	return ;
}


bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
