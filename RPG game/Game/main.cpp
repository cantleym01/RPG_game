//c++ included files
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cassert>
#include <vector>

//personal files
#include "Controller.h" //the game control
#include "Utility.h" //some bells and whistles

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, char *argv[])
{
    srand(time(NULL)); //seed the random

    vector<int> v1;
    v1.push_back(8);
    v1.push_back(90);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(12);
    cout << v1.at(0) << " ";
    cout << v1.at(1) << " ";
    cout << v1.at(2) << " ";
    cout << v1.at(3) << " ";
    cout << v1.at(4) << " ";

    sortVec(v1);

    cout << endl;
    cout << v1.at(0) << " ";
    cout << v1.at(1) << " ";
    cout << v1.at(2) << " ";
    cout << v1.at(3) << " ";
    cout << v1.at(4) << " ";

    //Controller Game;
    //Game.runGame();
}
