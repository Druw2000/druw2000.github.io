#include "tree.h"

int main (int argc, char *argv[]) {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window *window = SDL_CreateWindow("SDL2 Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	SDL_Surface *screen = SDL_GetWindowSurface(window);

	SDL_UpdateWindowSurface();

	SDL_Delay(10000);
	SDL_Quit();
	return 0;
}
