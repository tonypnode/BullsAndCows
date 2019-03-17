//
// Created by Anthony Pillitiere on 2019-03-15.
//
#include "fBullCowGame.h"
#include <iostream>

void fBullCowGame::Reset() {
    std::cout << "Reset";
}


int fBullCowGame::GetMaxTries() const { return MaxTries; }
int fBullCowGame::GetCurrentTry() const { return CurrentTry; }


bool fBullCowGame::IsGameWon() {
    return true;
}


bool fBullCowGame::CheckGuessValid(std::string) {
    return true;
}


