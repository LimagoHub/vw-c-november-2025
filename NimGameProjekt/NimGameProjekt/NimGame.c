#include <stdio.h>
#include <stdbool.h>

#include "NimGame.h"
// Variable
static int steine;

static bool gameOver();
static void init();
static void spielerzug();
static void computerzug();
static bool isValid(int zug);



void nim_play()
{
	init();
	while ( ! gameOver())
	{
		spielerzug();
		computerzug();
	}
}

static void init()
{
	steine = 23;
}



static void spielerzug()
{

	if (gameOver()) return;

	int zug;

	while(true)
	{
		printf("Es gibt %d Steine. Bitte nehmen Sie 1, 2 oder 3.\n", steine);
		scanf_s("%d", &zug);
		if (isValid(zug)) break;
		printf("Ungueltige Eingabe\n");
	}
	steine -= zug;
	if (gameOver())
	{
		printf("Spieler hat verloren!\n");
		
	}

}
static void computerzug()
{
	if (gameOver()) return;

	const int zuege [] = {3,1,1,2};

	int zug = zuege [steine % 4];
	printf("Computer nimmt %d Steine!\n", zug);
	steine -= zug;

	if (gameOver())
	{
		printf("Computer hat verloren!\n");

	}
	
}

static bool gameOver()
{
	return steine < 1;
}

static bool isValid(int zug)
{
	return zug >= 1 && zug <= 3;
}