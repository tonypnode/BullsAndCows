#include <iostream>
#include "fBullCowGame.h"

void PrintIntro();
std::string GetPlayerGuess();
void DisplayGuess(std::string Guess);
bool AskToPlayAgain();
void ThankYouGoodBye();
void PlayGame(int);
int main() {

    fBullCowGame Game;
    Game.CheckGuessValid("test");
    Game.IsGameWon();
    Game.CurrentTry();
    Game.GetMaxTries();
    Game.Reset();

    constexpr int GAME_LENGTH = 5;
    PlayGame(GAME_LENGTH);
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
    do {
        PrintIntro();

        for (int i = 0; i < GameLength; i++) {
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

void ThankYouGoodBye(){
    std::cout << "Thank You For Playing My Game :)\n\n\nBye";
}