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
    void Reset();
    int GetMaxTries();
    int CurrentTry();
    bool IsGameWon();
    bool CheckGuessValid(std::string);

private:

};