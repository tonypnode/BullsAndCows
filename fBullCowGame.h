//
// Created by Anthony Pillitiere on 2019-03-15.
//
#pragma once

#include <string>

using int32 = int;
using FString = std::string;

#ifndef BULLSANDCOWS_FBULLCOWGAME_H
#define BULLSANDCOWS_FBULLCOWGAME_H

#endif //BULLSANDCOWS_FBULLCOWGAME_H

class fBullCowGame {
public:
    fBullCowGame(); // Constructor
    int32 GetCurrentTry() const;
    int32 GetMaxTries() const;
    void IncrementCurrentTry();
    void Reset();
    void PrintCurrentStats();
    bool IsGameWon();
    bool CheckGuessValid(FString);


private:
    // Set in Constructor
    int32 MaxTries;
    int32 CurrentTry;
};