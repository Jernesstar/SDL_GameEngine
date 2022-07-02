#pragma once

#include <iostream>

#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

class PongGame {
public:
    const std::string player_1_name;
    const std::string player_2_name;
    SDL_Renderer* renderer;
    const int SCREEN_WIDTH, SCREEN_HEIGHT;

    void Run();
    void Draw_Circle(SDL_Renderer* renderer, SDL_Point center, int radius, SDL_Color color);
    void GetAudioSamples(Mix_Chunk* music_samples[], std::string* files, int file_count);

    PongGame(std::string name_1, std::string name_2, SDL_Renderer*& _renderer, int width, int height);
    ~PongGame();
};