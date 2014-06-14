#include "Controller.h"

//some defined variables
#define ScreenW 600 //screen width
#define ScreenH 400 //screen hight
#define ScreenHOffSet 100 //screen horizontal offset
#define ScreenVOffSet 100 //screen vertical offset


Controller::Controller()
{
    render = NULL; //set the renderer to NULL

    window = NULL; //set the window to NULL

    event = NULL; //set the event handler to NULL
}

Controller::~Controller(){}

void Controller::runGame()
{
    bool stahp = false;

    InitSDL(); //initialize

    //while we are not done, keep taking and processing input
    while (!stahp && event->type != SDL_QUIT)
    {
        SDL_PollEvent(event);

        SDL_RenderClear(render);

        SDL_RenderPresent(render);
    }

    DestSDL(); //destroy
}

void Controller::InitSDL()
{
    SDL_Init(SDL_INIT_EVERYTHING); //initialize

    //create the window (conmented out part will initialize the window to fullscreen, resizable)
    window = SDL_CreateWindow("Game name", ScreenHOffSet, ScreenVOffSet, ScreenW, ScreenH, SDL_WINDOW_SHOWN
                                                                                    /*
                                                                                    | SDL_WINDOW_FULLSCREEN
                                                                                    | SDL_WINDOW_RESIZABLE
                                                                                    */);
    assert(window != NULL); //some error checking

    //create the renderer
    render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    assert(render != NULL); //some error checking

    //create the event handler
    event = new SDL_Event();
    assert(event != NULL); //some error checking
}

void Controller::DestSDL()
{
    SDL_DestroyWindow(window); //destroy the window

    SDL_DestroyRenderer(render); //destroy the renderer

    delete event; //destroy the event handler
}
