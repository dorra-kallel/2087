#ifndef COLLSIONTRIGO_H_INCLUDED
#define COLLSIONTRIGO_H_INCLUDED
#include <SDL/SDL.h>
typedef struct Cercle
{
   int x,y;
   int rayon;
}cercle;
int collision(SDL_Rect* rect1,SDL_Rect* rect2);
int Collision(int x,int y,cercle C);
#endif 

