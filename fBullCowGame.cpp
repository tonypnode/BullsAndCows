//
// Created by Anthony Pillitiere on 2019-03-15.
//
#include "fBullCowGame.h"
#include <iostream>

void fBullCowGame::Reset() {
    std::cout << "Reset";
}


int fBullCowGame::GetMaxTries() {
    return MaxTries;
}


bool fBullCowGame::IsGameWon() {
    std::cout << "IsGameWon";
    return true;
}


bool fBullCowGame::CheckGuessValid(std::string) {
    std::cout << "CheckGuessValid";
    return true;
}


