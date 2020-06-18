/**
* @file score.c
*
*/
#include "score.h"
#include <stdio.h>
#include <stdlib.h>
/**
* @file SCORE.c
* @brief SCORE.
* @author dorra
* @version 0.1
* @date 17/6/2020
*
*/




/**
* @brief INITIALISER SCORE.
* @param SCORE SCORE
* @return NOTHING
*/

void initialiserscore(score *score){

score->posScore.x=420;
score->posScore.y=300;
score->nb=00;
score->textScore=NULL;
}

/**
* @brief INITIALISER SCORE.
* @param POLICE TTF_FONT
* @return NOTHING
*/

void loadFont(TTF_Font **police)
{
	TTF_Init(); //== -1
		//printf("Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());

	//}else{
	*police = TTF_OpenFont("this.ttf", 30);

}
/**
* @brief CALCULER SCORE.
* @param SCORE SCORE
* @param D INT
* @return NOTHING
*/
void calculerScore(score *score,int d){
if(d==1){
score->nb++;
}
}
/**
* @brief AFFICHER SCORE.
* @param SCORE SCORE
* @param POLICE TTF_Font
* @param ecran image
* @return NOTHING
*/




void afficherscore(score *score , SDL_Surface *ecran,TTF_Font *police){
char afs[50];
if(score->nb<=0) score->nb=0;
	sprintf(afs,"score= %d s",score->nb);
SDL_Color couleurNoire = {0, 0, 0};
	SDL_Color couleurBlanche = {255, 255, 255};

	score->textScore = TTF_RenderText_Blended(police,afs,couleurNoire);
	SDL_SetColorKey(score->textScore, SDL_SRCCOLORKEY, SDL_MapRGB(score->textScore->format, 255, 255, 255));
	SDL_BlitSurface(score->textScore,NULL,ecran,&score->posScore);
}
/**
* @brief free SCORE.
* @param POLICE TTF_Font
* @return NOTHING
*/

void freeFont(TTF_Font **police)
{
	TTF_CloseFont(*police); /* Doit être avant TTF_Quit() */
    TTF_Quit();	
}
