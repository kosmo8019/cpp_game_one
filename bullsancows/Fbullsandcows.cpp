#include "Fbullsandcows.h"

using int32 = int;

FBullCowGame::FBullCowGame(){ 	Reset(); }   //konstruktor

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const { return false; }



void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	
	const FString HIDDEN_WORD = "plane";
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;
	return ;
}
//receives a valid guess , increments turn , return count
BullCowCount FBullCowGame::SubmitGues(FString)
{
	//TODO increment the turn number
	MyCurrentTry++;

	//TODO setup a return variable
	BullCowCount BullCowCount;

	//TODO loop through all letters in the guess
	//TODO compare letters
	return BullCowCount;
}


bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
