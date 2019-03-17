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
void fBullCowGame::IncrementCurrentTry() { CurrentTry += 1; }

bool fBullCowGame::IsGameWon() {
    return true;
}

void fBullCowGame::PrintCurrentStats(){
    std::cout << "Try " << GetCurrentTry() << " of " << GetMaxTries() << std::endl;
}


bool fBullCowGame::CheckGuessValid(std::string) {
    return true;
}


