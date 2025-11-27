// EnumDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

typedef enum Wochentag {MONTAG , DIENSTAG, MITTWOCH} WOCHENTAG;


static int gewicht = 10;

void setGewicht(int neuesGewicht)
{
	
	gewicht = neuesGewicht;
}

int getGewicht()
{
	return gewicht;
}

int main()
{
	WOCHENTAG wochentag = DIENSTAG;

	setGewicht(20);
	printf("%d\n", getGewicht());


}

