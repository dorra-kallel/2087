#ifndef CHARACTERS_H_
#define CHARACTERS_H_

/**
* @struct character
* @brief struct for character
*/

typedef struct Character {

	SDL_Surface *Img;
	SDL_Rect MCP;
	int MS;
	int Health;
	int Score;
	int JH;
	int MaxJ;
	int MinJ;
	int DIR;
}Cha;


void Init_Character(Cha *Ch);
void Display_Character(Cha *Ch, SDL_Surface *Screen);
void Move_CharR(Cha *Ch);
void Move_CharL(Cha *Ch);
void Anim_CharR(Cha *Ch, SDL_Surface *Screen, int *NC);
void Anim_CharL(Cha *Ch, SDL_Surface *Screen, int *NC);






#endif /* CHARACTERS_H_ */
