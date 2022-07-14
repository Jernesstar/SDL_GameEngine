#pragma once

#include <SDL.h>

class GameObject {  
    
    public:
        virtual void SetPixel(SDL_Surface*& surface, uint32_t x, uint32_t y, uint32_t pixel);

        virtual void Scale(int32_t scalar);
        virtual void Translate(int32_t delta_x, int32_t delta_y);
        virtual void PlaceAt(uint32_t _x, uint32_t _y);
        
        virtual uint32_t GetX();
        virtual uint32_t GetY();
        virtual SDL_Rect* GetRect();
        virtual SDL_Texture** GetTexture();
        virtual SDL_Point* GetCenter();

    protected: 
        SDL_Rect rect;
        SDL_Texture* texture;
        SDL_Point center;
        SDL_Color color;

    protected:    
        GameObject();
        ~GameObject();
};