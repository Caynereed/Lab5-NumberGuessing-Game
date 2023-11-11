#ifndef Lab5_hpp
#define Lab5_hpp
#include <iostream>
#include <time.h>
#include <string>
#include <stdio.h>

class CaseInput
{
public:
    int guesses = 20;
    int guess;

private:
    int ranGus = rand() % 100 + 0;
};

class StartInput
{
public:
    int guess;
};

class EndInput
{
public:
    bool runAgain = true;
    char restart;
};
#endif /* Lab5_hpp */
