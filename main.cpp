/*

This is the console executable, that makes use of the BullCow Class
THis acts as the view in a MVC patter and is responsible for all user interaction.
For game logic see the fBullCowGame class.

*/
#include <iostream>
#include "fBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetPlayerGuess();
bool AskToPlayAgain();
void ThankYouGoodBye();
void PlayGame();

int32 main() {
    PlayGame();
    return 0;
}

void PrintIntro() {
   constexpr int32 WORD_LENGTH = 5;

   std::cout << "Welcome to Bulls and Cows.\n\n";
   std::cout << "Guess the " << WORD_LENGTH << " Letter isogram\n";

}

FText GetPlayerGuess() {
   FText Guess;

   std::cout << "Enter Guess: \n";
   std::getline(std::cin, Guess);

   return Guess;

}

void PlayGame() {
    PrintIntro();
    fBullCowGame Game;
    do {
        Game.Reset();
        for (int32 i = 0; i < Game.GetMaxTries(); i++) {
            Game.PrintCurrentStats();
            FText RoundGuess = GetPlayerGuess();
            fBullCowCount BullCowCount = Game.SubmitGuess(RoundGuess);
            std::cout << "Bulls = " << BullCowCount.Bulls << std::endl;
            std::cout << "Cows = " << BullCowCount.Cows << std::endl;
        }
    } while (AskToPlayAgain());
}

bool AskToPlayAgain() {
    std::cout << "Would You Like to Play Again y/n?\n";
    FText Answer;

    std::getline(std::cin, Answer);


    if(Answer == "y") {

        return true;

    } else if(Answer == "n") {
        ThankYouGoodBye();

        return false;

    } else {
        //TODO: Fix this, not restarting the PlayGame() loop after answering non 'y' or 'n' then answering 'y'.
        AskToPlayAgain();

    }
}

void ThankYouGoodBye(){
    std::cout << "Thank You For Playing My Game :)\n\n\nBye";
}