#include <iostream>
#include "fBullCowGame.h"

void PrintIntro();
std::string GetPlayerGuess();
void DisplayGuess(std::string Guess);
bool AskToPlayAgain();
void ThankYouGoodBye();
void PlayGame();

int main() {
    PlayGame();
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

void PlayGame() {
    PrintIntro();
    fBullCowGame Game;
    do {
        Game.Reset();
        for (int i = 0; i < Game.GetMaxTries(); i++) {
            Game.PrintCurrentStats();
            std::string RoundGuess = GetPlayerGuess();
            DisplayGuess(RoundGuess);
            Game.IncrementCurrentTry();
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

void ThankYouGoodBye(){
    std::cout << "Thank You For Playing My Game :)\n\n\nBye";
}