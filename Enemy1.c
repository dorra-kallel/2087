/**
* @file Enemy1.c
*
*/
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdlib.h>
#include <stdio.h>
#include "Enemy1.h"

void Initialize_Enemy1(Enemy1 *E1)
{
	E1->Enemy_Picture_R=IMG_Load("Enemy1_R.png");
	E1->Enemy_Picture_L=IMG_Load("Enemy1_L.png");
	E1->DImg=IMG_Load("DImg.png");
	E1->Enemy_Position.x=1000;
	E1->Enemy_Position.y=590;
	E1->C.x=1000;
	E1->C.y=590;
	E1->GP.x=0;
	E1->GP.y=0;
	E1->Life=100;
	E1->Damage=10;// andhom barre khater fel damage
	E1->R=1;
	E1->L=0;
}

/**-------------------------------------------------------------------------------------------------**/


void Display_Enemy1_R(Enemy1 *E1, SDL_Surface *Destination)
{
	SDL_Rect Rep;
	
	Rep=E1->Enemy_Position;
	SDL_BlitSurface(E1->Enemy_Picture_R, NULL, Destination, &Rep);
}

void Display_Enemy1_L(Enemy1 *E1, SDL_Surface *Destination)
{
	SDL_Rect Rep;
	
	Rep=E1->Enemy_Position;
	SDL_BlitSurface(E1->Enemy_Picture_L, NULL, Destination, &Rep);
}

/**-------------------------------------------------------------------------------------------------**/

