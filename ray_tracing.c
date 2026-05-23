#include <stdio.h>
#include <SDL2/SDL.h>

#define WIDTH 900
#define HEIGHT 600
#define COLOR_WHITE 0xffffffff

struct Circle
{
    double x;
    double y;
    double radius;
};


void FillCircle(SDL_Surface* surface,struct Circle circle){
    for (double x=circle.x-circle.radius;x<=circle.x+circle.radius;x++){
        for(double y=circle.y-circle.radius;y<=circle.y+circle.radius;y++){
            double distance_squared =pow(x-circle.x,2)+pow(y-circle.y,2);
        }
    }

}


int main(int argc, char* argv[]){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window=SDL_CreateWindow("RayTracing",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,0);
    SDL_Surface* surface=SDL_GetWindowSurface(window);
    SDL_Rect rect=(SDL_Rect) {200,200,200,200};
    SDL_FillRect(surface,&rect,COLOR_WHITE);
    FillCircle(surface,COLOR_WHITE);

    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);
}