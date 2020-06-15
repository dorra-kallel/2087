#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include"bounding.h"
bool check_collision( SDL_Rect *A, SDL_Rect *B )
{
    //Les cotes des rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;
 
    //Calcul les cotes du rectangle A
    leftA = A->x;
    rightA = A->x + A->w;
    topA = A->y;
    bottomA = A->y + A->h;
 
    //Calcul les cotes du rectangle B
    leftB = B->x;
    rightB = B->x + B->w;
    topB = B->y;
    bottomB = B->y + B->h;
if( bottomA <= topB )
    {
        return false;
    }
 
    if( topA >= bottomB )
    {
        return false;
    }
 
    if( rightA <= leftB )
    {
        return false;
    }
 
    if( leftA >= rightB )
    {
        return false;
    }
 
    //Si conditions collision detectee
    else
return true;
}
