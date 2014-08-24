#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include <string>
#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

/************************************************
* Functions to use in programs to be shortcuts  *
************************************************/

string intToStr(int intNumber); //take an integer and return it as a string

int StrToInt(const char* strNumber); //take a string and return it as an integer

template <typename T>
void sortVec(vector<T>& vec); //will sort any vector given to it
                //it will do from least to greatest (A to Z, a to z, 0 - 50, etc)

int intInput(int minim, int maxim, string whatIsInput); //will return user input with minimum and maximum requirements
                                //the parameters are the minumum value, maximum value, and the string to ask for input

string strInput(string whatIsInput); //will return user input in the form of a string
                                //the paramert is the string that asks for input

int randRange(int minim, int maxim); //will return a number in the range of the two numbers entered (will assume rand has already been seeded)
                                //the parameters will determine the lowest and highest numbers to be chosen

#endif // UTILITY_H
