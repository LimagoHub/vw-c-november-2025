#include <stdio.h>
#include <stdbool.h>

#include "NimGame.h"

static int steine;
static bool gameOver();
static void init();
static void spielerzug();
static void computerzug();

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
	printf("Spieler\n");
}
static void computerzug()
{
	printf("Comupter\n");
	steine--;
}

static bool gameOver()
{
	return steine < 1;
}