#ifndef RAND_MOVE_H_
#define RAND_MOVE_H_

#include "Enemy1.h"
/*
typedef struct Enemy1 {
	SDL_Surface *Enemy_Picture_R;
	SDL_Surface *Enemy_Picture_L;
	SDL_Rect Enemy_Position;
	int Life;
	int Damage;
	int State;
} Enemy1;

void Initialize_Enemy1(Enemy1 *E1);
void Display_Enemy1(Enemy1 *E1, SDL_Surface *Destination);
void pause();
*/

/**--------------------------------------------Random Mob Movement-------------------------------------------**/

void Random_Movement(Enemy1 *E1, SDL_Surface *Destination);



















#endif /* RAND_MOVE_H_ */
