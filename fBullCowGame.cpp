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
    const FString HIDDEN_WORD = "ant";
    MyHiddenWord = HIDDEN_WORD;
    MaxTries = 5;
    CurrentTry = 1;
}


int32 fBullCowGame::GetMaxTries() const { return MaxTries; }
int32 fBullCowGame::GetCurrentTry() const { return CurrentTry; }

bool fBullCowGame::IsGameWon() {
    return true;
}

void fBullCowGame::PrintCurrentStats(){
    std::cout << "Try " << GetCurrentTry() << " of " << GetMaxTries() << std::endl;
}


bool fBullCowGame::CheckGuessValid(std::string) {
    return true;
}

//Assumes valid guess, returns count
fBullCowCount fBullCowGame::SubmitGuess(FString Guess) {
    // increment the turn number
    CurrentTry ++;

    // setup return var
    fBullCowCount BullCowCount;
    int32 HiddenWordLength = MyHiddenWord.length();
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
    return BullCowCount;
}


