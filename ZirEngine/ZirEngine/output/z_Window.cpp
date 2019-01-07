#include "z_Window.h"

Window::Window(const char * title, int width, int height) {
	window = SDL_CreateWindow(title, 100, 1000, width, height, SDL_WINDOW_SHOWN);
}

SDL_Renderer* Window::createRenderer() {
	return SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}