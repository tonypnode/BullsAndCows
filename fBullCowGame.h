//
// Created by Anthony Pillitiere on 2019-03-15.
//
#pragma once

#include <string>

#ifndef BULLSANDCOWS_FBULLCOWGAME_H
#define BULLSANDCOWS_FBULLCOWGAME_H

#endif //BULLSANDCOWS_FBULLCOWGAME_H

class fBullCowGame {
public:
    int GetCurrentTry() const;
    int GetMaxTries() const;
    void Reset();
    bool IsGameWon();
    bool CheckGuessValid(std::string);


private:
    int MaxTries = 5;
    int CurrentTry = 0;
};