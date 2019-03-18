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

struct fBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

enum class EGuessStatus {
    Invalid_Status,
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_All_Lowercase,

};

class fBullCowGame {
public:
    fBullCowGame(); // Constructor

    int32 GetCurrentTry() const;
    int32 GetMaxTries() const;
    int32 GetHiddenWordLength() const;

    bool IsGameWon();
    bool PrintGameSummary();
    bool AskPlayAgain();


    void Reset();
    void PrintCurrentStats();
    void PrintIntro();


    EGuessStatus CheckGuessValid(FString);

    //Counts bulls and cows, assuming valid guess
    fBullCowCount SubmitGuess(FString);

private:
    // Set in Constructor
    int32 MaxTries;
    int32 CurrentTry;
    int32 bIsGameWon;

    FString MyHiddenWord;

    bool IsIsogram(FString);
};