/* This is the Doom Cricket main file.
To compile run gcc -o doom_cricket doom_cricket.c `sdl2-config --cflags --libs`*/

// Inclusions
#include <SDL2/SDL.h> // For graphics
#include <stdio.h> // For standard input and output


// Main code
int main(int argc, char *argv[]) { // Number of arguments

if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("Oh no! SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    return 1; // Returning 1 as it signifies an error occurred.
  }

// Create a window
    SDL_Window *window = SDL_CreateWindow("Doom Cricket",
                                         SDL_WINDOWPOS_UNDEFINED,
                                         SDL_WINDOWPOS_UNDEFINED,
                                         800, 600, SDL_WINDOW_SHOWN);

if (window == NULL) {
  printf("Could not create window: %s\n", SDL_GetError());
  SDL_Quit();
  return 1;
}


// Keep window open
SDL_bool done = SDL_FALSE;
   while (!done) {
       SDL_Event event;
       while (SDL_PollEvent(&event)) {
           if (event.type == SDL_QUIT) {
               done = SDL_TRUE;
           }
       }
   }

// Rest of code goes here.

SDL_DestroyWindow(window);
SDL_Quit();
return 0;

}
