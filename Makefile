GameExe:Enemy1.o main.o Rand_Move.o Background.o Characters.o GameMechanics.o
	gcc Enemy1.o main.o Rand_Move.o Background.o Characters.o GameMechanics.o -o GameExe -lSDL -lSDL_image -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -g
Enemy1.o:Enemy1.c
	gcc -c Enemy1.c -lSDL -lSDL_image -g
Rand_Move.o:Rand_Move.c
	gcc -c Rand_Move.c -lSDL -lSDL_image -g
Background.o:Background.c
	gcc -c Background.c -lSDL -lSDL_image -g
Characters.o:Characters.c
	gcc -c Characters.c -lSDL -lSDL_image -g
GameMechanics.o:GameMechanics.c
	gcc -c GameMechanics.c -lSDL -lSDL_image -g
