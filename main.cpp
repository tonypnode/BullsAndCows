#include <iostream>
#include "fBullCowGame.h"

void PrintIntro();
std::string GetPlayerGuess();
void DisplayGuess(std::string Guess);
bool AskToPlayAgain();
void ThankYouGoodBye();
void PlayGame(int);
void PrintCurrentStats(int);


fBullCowGame Game;

int main() {
    PlayGame(Game.GetMaxTries());
    ThankYouGoodBye();
    return 0;
}


void PrintIntro() {
   constexpr int WORD_LENGTH = 5;

   std::cout << "Welcome to Bulls and Cows.\n\n";
   std::cout << "Guess the " << WORD_LENGTH << " Letter isogram\n";

}

std::string GetPlayerGuess() {
   std::string Guess;

   std::cout << "Enter Guess: \n";
   std::getline(std::cin, Guess);

   return Guess;

}

void DisplayGuess(std::string Guess) {

   std::cout << "Your Guess was: " << Guess << std::endl;

}

void PlayGame(int GameLength){
    PrintIntro();
    do {
        for (int i = 0; i < GameLength; i++) {
            PrintCurrentStats(i);
            std::string RoundGuess = GetPlayerGuess();
            DisplayGuess(RoundGuess);
        }
    } while (AskToPlayAgain());
}

bool AskToPlayAgain() {
    std::cout << "Would You Like to Play Again y/n?\n";
    std::string Answer;

    std::getline(std::cin, Answer);

    if(Answer == "y") {
        return true;
    } else if(Answer == "n") {
        return false;
    } else {
        AskToPlayAgain();
    }
}

void PrintCurrentStats(int TryNumber){
    //Need to add 1 to param because starts with 0
    std::cout << "Try " << TryNumber +1 << " of " << Game.GetMaxTries() << std::endl;
}

void ThankYouGoodBye(){
    std::cout << "Thank You For Playing My Game :)\n\n\nBye";
}