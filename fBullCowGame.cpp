//
// Created by Anthony Pillitiere on 2019-03-15.
//
#include "fBullCowGame.h"
#include <iostream>

using int32 = int;

fBullCowGame::fBullCowGame() {
    Reset();
}

void fBullCowGame::Reset() {
    const FString HIDDEN_WORD = "planet";
    MyHiddenWord = HIDDEN_WORD;
    MaxTries = 5;
    CurrentTry = 1;
    bIsGameWon = false;
}


int32 fBullCowGame::GetMaxTries() const { return MaxTries; }
int32 fBullCowGame::GetCurrentTry() const { return CurrentTry; }
int32 fBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }
bool fBullCowGame::IsGameWon() { return bIsGameWon; }

void fBullCowGame::PrintCurrentStats(){
    std::cout << "Try " << GetCurrentTry() << " of " << GetMaxTries() << std::endl;
}


EGuessStatus fBullCowGame::CheckGuessValid(FString Guess) {
    if(false){
        return EGuessStatus::Not_Isogram;
    } else if(false) {
        return EGuessStatus::Not_All_Lowercase;
    } else if(Guess.length() != GetHiddenWordLength()) {
        return EGuessStatus::Wrong_Length;
    } else {
        return EGuessStatus::OK;
    }
}



//Assumes valid guess, returns count
fBullCowCount fBullCowGame::SubmitGuess(FString Guess) {
    // increment the turn number
    CurrentTry ++;

    // setup return var
    fBullCowCount BullCowCount;
    int32 HiddenWordLength = GetHiddenWordLength();
    for (int32 i = 0; i < HiddenWordLength; i++ ) {
        for (int32 ii = 0; ii < HiddenWordLength; ii++) {
            if(MyHiddenWord[i] == Guess[ii]) {
                if (i == ii) {
                    BullCowCount.Bulls++;
                } else {
                    BullCowCount.Cows++;
                }
            }
        }
    }
    if(BullCowCount.Bulls == GetHiddenWordLength()) {
        bIsGameWon = true;
    }
    return BullCowCount;
}

void fBullCowGame::PrintIntro() {
    std::cout << "\n\nWelcome to Bulls and Cows.\n\n";
    std::cout << "Guess the " << GetHiddenWordLength() << " Letter isogram\n";

}

bool fBullCowGame::AskPlayAgain() {
    std::cout << "Would You Like to Play Again y/n?\n";
    FString Answer;

    std::getline(std::cin, Answer);

    if (Answer == "y") {
        return true;

    } else if (Answer == "n") {
        std::cout << "Thank You For Playing My Game :)\n\n\nBye";
        return false;

    } else {
        //TODO: Fix this, not restarting the PlayGame() loop after answering non 'y' or 'n' then answering 'y'.
        AskPlayAgain();

    }

}

bool fBullCowGame::PrintGameSummary() {
    FString Message;

    if(bIsGameWon) {
        Message = "Yaaay, You be supr el smarto!\n\nYOU WON!!!\n\n";
    } else {
        Message = "Eeek, you didn't do so well. I recommend being smarter...\n\nJust sayin...\n\n";
    }
    std::cout << Message;
    return AskPlayAgain();
}