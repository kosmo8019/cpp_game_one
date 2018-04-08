#include<iostream>
#include<string>
#include"Fbullsandcows.h"

using FText = std::string;
using int32 = int;


void PrintIntroMassage();
void PlayGame();
FText GetGuess();
void PrintGuess(FText);
bool AskToPlayAgain();


FBullCowGame BCGame; //instantiate a new game

int main()
{
	PrintIntroMassage();
	
	do {
		PlayGame();
		//TODO summarise game
	}while(AskToPlayAgain()==true);

	return 0;

}

//****************************************************************************************
//introduce game
void PrintIntroMassage()
{

	constexpr int32 W_LENGHT = 5;
	std::cout << "WELCOME TO BULLS AND COWS GAME" << std::endl;
	std::cout << "YOU NEED TO GUES " << W_LENGHT << " LETTER ISOGRAM.\n";
	return;

}



//***************************************************************************************
//loop for the number of turns asking for guesses
void PlayGame()
{
	FBullCowGame BCGame; //instantiate a new game
	int32 MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	for (int32 GuessNumber = 0; GuessNumber < MaxTries; GuessNumber++)
	{
		FText GuessReturn = GetGuess();  //TODO valid guess
		//print numbers
		PrintGuess(GuessReturn);
		std::cout << std::endl;
	}
}



//****************************************************************************************
//get a guess from the player
FText GetGuess(){
	FText Guess = "";
	std::cout<<"Try "<< BCGame.GetCurrentTry() << ".   WRITE THE WORD --->  ";
	std::getline(std::cin, Guess);
	return Guess;
}

//*****************************************************************************************
//print word
void PrintGuess(FText Guess) {
	std::cout << "\n";
	std::cout << "Your guess was : " << Guess << std::endl;
}

//******************************************************************************************
bool AskToPlayAgain()
{
	std::cout << "Do you want play again?";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
	
}
