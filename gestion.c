#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include"bounding.h"
#include "Enemy1.h"
#include "Characters.h"
void update_score(Cha* P,Enemy1 E, int stage)
{
if (check_collision(&P->position,&E.Enemy_Position)==1)
{
if (stage==1)
(P->score)+=15;
if (stage==2)
(P->score)+=30;
if (stage==3)
(P->score)+=45;
}
} 
void update_vie(Cha* P,Enemy1 E,SDL_Rect *obstacle,SDL_Rect *life_pickup,int stage)
{
if (check_collision(&P->position,&E.Enemy_Position)==1)
{
if (stage==1)
(P->life)-=0.5;
if (stage==2)
(P->life)-=1;
if (stage==3)
(P->life)-=2;
}
if (check_collision(&P->position, obstacle)==1)
(P->life)-=2;
if (check_collision(&P->position, life_pickup)==1)
(P->life)+=1;
}
//cette fonction doit etre procedee par SDL_PollEvent
void time()
{
int tempsPrecedent=0,tempsActuel=0;
tempsActuel = SDL_GetTicks();
if (tempsActuel - tempsPrecedent > 30) 
tempsPrecedent = tempsActuel;
}




