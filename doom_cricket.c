/* This is the Doom Cricket main file.
To compile run gcc -o doom_cricket doom_cricket.c `sdl2-config --cflags --libs`*/

// Inclusions
#include <SDL2/SDL.h>


// Main code
int main(int argc, char *argv[]) { // Number of arguments

if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("Oh no! SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    return 1; // Returning 1 as it signifies an error occurred.
} else {
    printf("SDL successfully initialized! Di door to Doom Cricket has been unlocked!\n");
}

// Rest of code goes here.


SDL_Quit();
return 0;

}
