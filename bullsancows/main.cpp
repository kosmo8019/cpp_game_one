#include<iostream>
#include<string>
#include"Fbullsandcows.h"



void PrintIntroMassage();
void PlayGame();
std::string GetGuess();
void PrintGuess(std::string);
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





//***************************************************************************************
//loop for the number of turns asking for guesses
void PlayGame()
{
	FBullCowGame BCGame; //instantiate a new game
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	for (int GuessNumber = 0; GuessNumber < MaxTries; GuessNumber++)
	{
		std::string GuessReturn = GetGuess();  //TODO vald guess
		//print numbers
		PrintGuess(GuessReturn);
		std::cout << std::endl;
	}
}

//****************************************************************************************
//introduce game
void PrintIntroMassage() {

	constexpr int W_LENGHT = 5;
	std::cout << "WELCOME TO BULLS AND COWS GAME" << std::endl;
	std::cout << "YOU NEED TO GUES " << W_LENGHT << " LETTER ISOGRAM.\n";
	return;

}

//****************************************************************************************
//get a guess from the player
std::string GetGuess(){
	std::string Guess = "";
	std::cout<<"Try "<< BCGame.GetCurrentTry() << ".   WRITE THE WORD --->  ";
	std::getline(std::cin, Guess);
	return Guess;
}

//*****************************************************************************************
//print word
void PrintGuess(std::string Guess) {
	std::cout << "\n";
	std::cout << "Your guess was : " << Guess << std::endl;
}

//******************************************************************************************
bool AskToPlayAgain()
{
	std::cout << "Do you want play again?";
	std::string Response = "";
	std::getline(std::cin, Response);
	//std::cout<< "Your response is  " << (Response[0]==('y' || 'Y'))<<std::endl;
	return (Response[0] == 'y') || (Response[0] == 'Y');
	
}
