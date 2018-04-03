#pragma once
#include<string>;

class FBullCowGame {
public:
	FBullCowGame();			//konstruktor
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon()const;

	void Reset();
	bool CheckGuessValidity(std::string);


private:
	int MyCurrentTry;
	int MyMaxTries;
	bool IsIsogram();
};
