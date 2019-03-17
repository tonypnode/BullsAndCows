//
// Created by Anthony Pillitiere on 2019-03-15.
//
#pragma once

#include <string>



#ifndef BULLSANDCOWS_FBULLCOWGAME_H
#define BULLSANDCOWS_FBULLCOWGAME_H
#endif //BULLSANDCOWS_FBULLCOWGAME_H

using int32 = int;
using FString = std::string;

struct fBullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
};

class fBullCowGame {
public:
    fBullCowGame(); // Constructor

    int32 GetCurrentTry() const;
    int32 GetMaxTries() const;

    void Reset();
    void PrintCurrentStats();

    bool IsGameWon();
    bool CheckGuessValid(FString);

    //Counts bulls and cows, assuming valid guess
    fBullCowCount SubmitGuess(FString);

private:
    // Set in Constructor
    int32 MaxTries;
    int32 CurrentTry;
    FString MyHiddenWord;
};