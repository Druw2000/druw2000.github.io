#include "tree.h"

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event event;
SDL_bool done = SDL_FALSE;
SDL_Point mouse;

const int WIDTH = 480;
const int HEIGHT = 360;
const float MAX_ANGLE = 2160.0;
const int LENGTH = 2;
const int DELAY = 1000;

int DrawCircleAtCursor() {
	const int GRAPH_ZERO_X = WIDTH/2;
	const int GRAPH_ZERO_Y = HEIGHT/2;
	int radius = 10;
	SDL_Point center = mouse;
	SDL_Color color = {255, 0, 0, 0};
	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
	int w = 0;
	for (; w < radius * 2; w++)
	{
		int h = 0;
		for (; h < radius * 2; h++) {
			int dx = radius - w;
			int dy = radius - h;
			if ((dx*dx + dy*dy) <= (radius * radius))
			{
				SDL_RenderDrawPoint(renderer, center.x + dx, center.y + dy);
			}
		}
	}
}

int main (int argc, char *argv[]) {
	const int GRAPH_ZERO_X = WIDTH/2;
	const int GRAPH_ZERO_Y = HEIGHT/2;
	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &window, &renderer);
	SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "2" );
	int round = 0;
	while (!done) {
		int previousTime = SDL_GetTicks();
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_KEYDOWN:
					switch (event.key.keysym.sym) {
						case SDLK_LEFT:
							break;
						case SDLK_RIGHT:
							break;
						case SDLK_UP:
							break;
						case SDLK_DOWN:
							break;
						case SDLK_q:
							done = SDL_TRUE;
						default:
							break;
					}
			}
		}
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
		//SDL_RenderClear(renderer);
		SDL_GetMouseState (&mouse.x, &mouse.y);
		//DrawCircleAtCursor();
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
	
		int theta = 4.0 * (float) round;
		if (theta <= MAX_ANGLE) {
			float graphX = (GRAPH_ZERO_X/LENGTH) * cos(theta);
			float graphY = (GRAPH_ZERO_Y/LENGTH) * sin(theta);
			printf("graph : %.2f %.2f\n", graphX, graphY);
			float localX = graphX + GRAPH_ZERO_X;
			float localY = graphY + GRAPH_ZERO_Y;
			printf("local : %.2f %.2f\n", localX, localY);
			SDL_RenderDrawLine(renderer, GRAPH_ZERO_X, GRAPH_ZERO_Y, localX, localY);
		}
		SDL_RenderPresent(renderer);
		SDL_Delay(DELAY);
		round ++;
	}
	if (renderer) {
		SDL_DestroyRenderer(renderer);
	}
	if (window) {
		SDL_DestroyWindow(window);
	}
	SDL_Quit();
	return 0;
}
