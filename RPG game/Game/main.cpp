//c++ included files
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cassert>

//personal files
#include "Controller.h" //the game control
//#include "B&W.h" //some bells and whistles

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, char *argv[])
{
    srand(time(NULL)); //seed the random

    Controller Game;
    Game.runGame();

}
