/**
* @file gameMechanics.c
*
*/
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdlib.h>
#include <stdio.h>
#include "Characters.h"
#include "Rand_Move.h"
#include "Background.h"
#include "GameMechanics.h"
#include "score.h"
#include "Enemy1.h"
#include "vie.h"

/**
* @file gameMechanics.c
* @brief move
* @author dorra
* @version 0.1
* @date 17/6/2020
*
* 
*/

/**
* @brief COLLISION.
* @param  ch cha
* @param E1 Enemy1 
* @return int
*/




int Collision_Enemy(Cha *Ch,Enemy1 *E1)
{
	
	if (Ch->MCP.x>=E1->Enemy_Position.x && Ch->MCP.x<=E1->Enemy_Position.x+E1->Enemy_Picture_R->w && abs(Ch->MCP.y+E1->Enemy_Picture_R->h - E1->Enemy_Position.y)==40)
	{
		return 1;
	}
	else if (abs(Ch->MCP.y+E1->Enemy_Picture_R->h - E1->Enemy_Position.y)==60  && (abs(Ch->MCP.x+Ch->Img->w - E1->Enemy_Position.x)<=10 || abs(Ch->MCP.x - (E1->Enemy_Position.x + E1->Enemy_Picture_R->w)==10)))
	{
		return 2;
	}
	else
	{
		return 0;
	}
		
}
/**
* @brief COLLISION.
* @param  ch cha
* @param WOS WO
* @return int
*/

int Collision_World_Obj(Cha *Ch, WO *WOS)
{
	int Case=0;

	//if((Ch->MCP.x+40>=WOS->GR1P1.x)&&(Ch->MCP.y+60>WOS->GR1P1.y))
		//Case=1;
	if((Ch->MCP.y+60>=WOS->GR1P1.y)&&(Ch->MCP.y+60<=WOS->GR1P1.y+30)&&(Ch->MCP.x+20>=WOS->GR1P1.x)&&(Ch->MCP.x+20<WOS->GR1P1.x+1300)/*HERE*/||(Ch->MCP.y+60>=WOS->GR2P1.y)&&(Ch->MCP.y+60<=WOS->GR2P1.y+30)&&(Ch->MCP.x+26>=WOS->GR2P1.x)&&(Ch->MCP.x+20<WOS->GR2P1.x+200)/*HERE*/||(Ch->MCP.y+60>=WOS->GR2P2.y)&&(Ch->MCP.y+60<=WOS->GR2P2.y+30)&&(Ch->MCP.x+26>=WOS->GR2P2.x)&&(Ch->MCP.x+20<WOS->GR2P2.x+200)/*HERE*/||(Ch->MCP.y+60>=WOS->GR1P2.y)&&(Ch->MCP.y+60<=WOS->GR1P2.y+30)&&(Ch->MCP.x+26>=WOS->GR1P2.x)&&(Ch->MCP.x+20<WOS->GR1P2.x+1300)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP1.y)&&(Ch->MCP.y+60<=WOS->GRXSP1.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP1.x)&&(Ch->MCP.x+20<WOS->GRXSP1.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP2.y)&&(Ch->MCP.y+60<=WOS->GRXSP2.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP2.x)&&(Ch->MCP.x+20<WOS->GRXSP2.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP3.y)&&(Ch->MCP.y+60<=WOS->GRXSP3.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP3.x)&&(Ch->MCP.x+20<WOS->GRXSP3.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP4.y)&&(Ch->MCP.y+60<=WOS->GRXSP4.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP4.x)&&(Ch->MCP.x+20<WOS->GRXSP4.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRS1P.y)&&(Ch->MCP.y+60<=WOS->GRS1P.y+30)&&(Ch->MCP.x+26>=WOS->GRS1P.x)&&(Ch->MCP.x+20<WOS->GRS1P.x+1050)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP5.y)&&(Ch->MCP.y+60<=WOS->GRXSP5.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP5.x)&&(Ch->MCP.x+20<WOS->GRXSP5.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP6.y)&&(Ch->MCP.y+60<=WOS->GRXSP6.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP6.x)&&(Ch->MCP.x+20<WOS->GRXSP6.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GR1P3.y)&&(Ch->MCP.y+60<=WOS->GR1P3.y+30)&&(Ch->MCP.x+26>=WOS->GR1P3.x)&&(Ch->MCP.x+20<WOS->GR1P3.x+1300)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP7.y)&&(Ch->MCP.y+60<=WOS->GRXSP7.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP7.x)&&(Ch->MCP.x+20<WOS->GRXSP7.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP8.y)&&(Ch->MCP.y+60<=WOS->GRXSP8.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP8.x)&&(Ch->MCP.x+20<WOS->GRXSP8.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP9.y)&&(Ch->MCP.y+60<=WOS->GRXSP9.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP9.x)&&(Ch->MCP.x+20<WOS->GRXSP9.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP10.y)&&(Ch->MCP.y+60<=WOS->GRXSP10.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP10.x)&&(Ch->MCP.x+20<WOS->GRXSP10.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP11.y)&&(Ch->MCP.y+60<=WOS->GRXSP11.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP11.x)&&(Ch->MCP.x+20<WOS->GRXSP11.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP12.y)&&(Ch->MCP.y+60<=WOS->GRXSP12.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP12.x)&&(Ch->MCP.x+20<WOS->GRXSP12.x+100)/*HERE*/||(Ch->MCP.y+60>=WOS->GRXSP13.y)&&(Ch->MCP.y+60<=WOS->GRXSP13.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP13.x)&&(Ch->MCP.x+20<WOS->GRXSP13.x+100))
		Case=1;
	else if((Ch->MCP.y<WOS->GRXSP5.y+30)&&(Ch->MCP.y+60>WOS->GRXSP5.y+30)&&(Ch->MCP.x+26>=WOS->GRXSP5.x)&&(Ch->MCP.x+20<WOS->GRXSP5.x+100)/*HERE*/||(Ch->MCP.y<WOS->GR1P3.y+30)&&(Ch->MCP.y+60>WOS->GR1P3.y+30)&&(Ch->MCP.x+26>=WOS->GR1P3.x)&&(Ch->MCP.x+20<WOS->GR1P3.x+100))
		Case=2;
	return Case;
}

/**
* @brief Jump.
* @param  ch cha
* @param E1 Enemy1 
* @return Nothing
*/


void Jump(Cha *Ch, Enemy1 *E1, SDL_Rect OMCP, WO *WOS)
{
	if(Ch->MaxJ==1)
	{
		Ch->MCP.y=Ch->MCP.y-10;
		if((Ch->MCP.y==OMCP.y-Ch->JH)||(Collision_World_Obj(Ch,WOS)==2))
		{
			Ch->MaxJ=0;
		}
	}
	else if(Ch->MinJ!=1)
	{
		Ch->MCP.y=Ch->MCP.y+10;
		if(Collision_World_Obj(Ch,WOS)==1)
		{
			Ch->MinJ=1;
			Ch->Img=IMG_Load("SR1.png");
			if(Ch->DIR==0)
			{
				Ch->Img=IMG_Load("SL1.png");
			}
		}
	}
	else if((Ch->MinJ==1)&&(Collision_World_Obj(Ch,WOS)==0))
	{
		Ch->MinJ=0;
	}
}

void ScrollR(SDL_Rect *P)
{
	P->x=P->x+4;
}

void ScrollL(SDL_Rect *P)
{
	P->x=P->x-4;
}
/**
* @brief COLLISION.
* @param  ch cha
* @param coin pos
* @return int
*/


int collision_coin(Cha *ch,SDL_Rect	coin)
{
	//printf("ABS:%d\n",abs(ch->MCP.y+ch->Img->h-coin.y));
	//printf("HOR: %d\n",abs(ch->MCP.x - coin.x ));//&& ch->MCP.x - coin.x+coin.w));
	if (ch->MCP.x-180 >= coin.x && ch->MCP.x-180 <= coin.x+coin.w)// && abs(ch->MCP.y+ch->Img->h-coin.y)==20)
		return 1;
	else 
		return 0;
}






















