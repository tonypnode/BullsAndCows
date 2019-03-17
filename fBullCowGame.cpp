//
// Created by Anthony Pillitiere on 2019-03-15.
//
#include "fBullCowGame.h"
#include <iostream>

fBullCowGame::fBullCowGame() {
    Reset();
}

void fBullCowGame::Reset() {
    MaxTries = 5;
    CurrentTry = 1;
}


int fBullCowGame::GetMaxTries() const { return MaxTries; }
int fBullCowGame::GetCurrentTry() const { return CurrentTry; }


bool fBullCowGame::IsGameWon() {
    return true;
}

void PrintCurrentStats(int TryNumber){
    std::cout << "Try " << TryNumber +1 << " of " << Game.GetMaxTries() << std::endl;
}


bool fBullCowGame::CheckGuessValid(std::string) {
    return true;
}


