#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <SDL.h>
#include <SDL_image.h>
#include <cassert>

class Controller
{
    public:
        Controller();
        ~Controller();
        void runGame(); //will handle all input in the game

    protected:
        void InitSDL(); //set everything up at the beggining
        void DestSDL(); //destroy what needs to be destoryed at the end of the game

    private:
        SDL_Renderer* render; //the renderer for the game
        SDL_Window* window; //the window of the game
        SDL_Event* event; //the event handler for the game;
};

#endif // CONTROLLER_H
