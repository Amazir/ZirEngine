#pragma once
#include "SDL.h"
#include <iostream>

using namespace std;

class Window {
public:
	Window(const char *, int, int);
	~Window();

	SDL_Renderer * createRenderer();

private:
	SDL_Window * window;
};