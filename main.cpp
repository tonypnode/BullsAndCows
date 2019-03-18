/*

This is the console executable, that makes use of the BullCow Class
THis acts as the view in a MVC patter and is responsible for all user interaction.
For game logic see the fBullCowGame class.

*/
#include <iostream>
#include "fBullCowGame.h"

using FText = std::string;
using int32 = int;

FText GetPlayerGuess();
bool AskToPlayAgain();
void ThankYouGoodBye();
void PlayGame();

int32 main() {
    PlayGame();
    return 0;
}

fBullCowGame Game;

void PlayGame() {

    Game.PrintIntro();
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

FText GetPlayerGuess() {
    FText Guess;
    EGuessStatus GuessCheck = EGuessStatus::Invalid_Status;
    do {
        std::cout << "Enter Guess: \n";
        std::getline(std::cin, Guess);

        GuessCheck = Game.CheckGuessValid(Guess);
        switch (GuessCheck) {
            case EGuessStatus::Wrong_Length:
                std::cout << "Please enter a " << Game.GetHiddenWordLength() << " word, this isn't going well for you\n\n";
                break;
            case EGuessStatus::Not_Isogram:
                std::cout << "You didn't enter an isogram.... RTFM brohiem, here you go... http://lmgtfy.com/?q=what+is+an+isogram\n\n";
                break;
            case EGuessStatus::Not_All_Lowercase:
                std::cout << "Yea, this one is totally on me. This isn't python or go, make your guess all lower case isn't that easy, so do it for me for now...\n\n";
                break;
            default:
                // assumes valid guess
                continue;
        }
        std::cout << std::endl;
    } while(GuessCheck != EGuessStatus::OK);

    return Guess;

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