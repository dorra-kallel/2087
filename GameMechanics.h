#ifndef GAMEMECHANICS_H_
#define GAMEMECHANICS_H_


int Collision_Enemy(Cha *Ch, Enemy1 *E1);
int Collision_World_Obj(Cha *Ch, WO *WOS);
void Jump(Cha *Ch, Enemy1 *E1, SDL_Rect OMCP, WO *WOS);
void ScrollR(SDL_Rect *P);
void ScrollL(SDL_Rect *P);



#endif /* GAMEMECHANICS_H_ */
