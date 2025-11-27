// BoeseFalle.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <stdlib.h>

char * machWasTolles( int anzahl)
{
	char *feld = malloc(100 *sizeof(char));
	for (int i = 0; i < anzahl; ++i)
	{
		feld[i] = 'X';
	}
	feld[anzahl] = 0;
	return feld;
}



int main()
{
	char* ptr = machWasTolles(5);
	
	printf("%s\n",ptr);

	free(ptr);

}
