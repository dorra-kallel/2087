#ifndef __include_bounding_h__
#define __include_bounding_h__
#include<SDL/SDL.h>

typedef int bool;
#define true 1
#define false 0

bool check_collision( SDL_Rect *A, SDL_Rect *B );
#endif
