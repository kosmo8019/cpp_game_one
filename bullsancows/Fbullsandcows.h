#pragma once
#include<string>;

using FString = std::string;
using int32 = int;

struct BullCowCount 
{
	int32 Bulls = 0;
	int32 cows = 0;

};


class FBullCowGame {
public:
	FBullCowGame();			//konstruktor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon()const;

	void Reset();
	bool CheckGuessValidity(FString);

	// counts buls and cows & increases try & assuming valid guess
	BullCowCount SubmitGues(FString);


private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
	bool IsIsogram();
};
