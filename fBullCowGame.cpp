//
// Created by Anthony Pillitiere on 2019-03-15.
//
#include "fBullCowGame.h"
#include <iostream>

void fBullCowGame::Reset() {
    std::cout << "Reset";

}

int fBullCowGame::GetMaxTries() {
    std::cout << "GetMaxTries";
    return 1;
}

int fBullCowGame::CurrentTry() {
    std::cout << "CurrentTry";
    return 1;
}

bool fBullCowGame::IsGameWon() {
    std::cout << "IsGameWon";
    return true;

}

bool fBullCowGame::CheckGuessValid(std::string) {
    std::cout << "CheckGuessValid";
    return true;

}


