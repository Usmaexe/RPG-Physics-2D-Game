#include <iostream>

#include <SDL2/SDL.h>

using namespace std;

int main(int argc , char *argv[])
{
    if( SDL_Init(SDL_INIT_EVERYTHING) < 0 )
    {
        cout << "SDL could not intialise! SDL Error : " << SDL_GetError() << endl;
    }
    cout << "Hello world";

    return EXIT_SUCCESS;//similar to return 0
}
