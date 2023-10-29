#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(int argc, char *argv[]){

  if (SDL_Init(SDL_INIT_VIDEO)<0) {
    printf("SDL ERROR : %s/n", SDL_GetError());
    exit(1);
  }
 SDL_Window *const window = SDL_CreateWindow("Hunger Games", 0,0 , SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);

  printf("Hello World! \n");
  SDL_Quit();
  return 0;
}
