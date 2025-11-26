// PointerProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>




void printLottozahlen(const  /* feld konstant */ int*  feld, const size_t size)
{
	printf("Size of Feld %d\n", sizeof(feld));
	for (size_t i = 0; i < size; ++i)
	{
		printf("der %ld.te Wert ist %d\n", i, feld[i]);
	}

	
	//feld[0] = 4711;// Fehler wegen const

}


int main()
{

	int lottozahlen[] = {3,10,13,15,22,23};

	printLottozahlen(lottozahlen, 6);

	printf("Wert %d\n", lottozahlen[0]);

	/*
	int* ptr;

	

	ptr = lottozahlen;

	printf("Wert: %d\n", lottozahlen[0]);
	printf("Wert: %d\n", *ptr);

	printf("Wert: %d\n", ptr[0]);
	printf("Wert: %d\n", *lottozahlen);

	printf("Wert: %d\n", lottozahlen[1]); // 
	printf("Wert: %d\n", *(ptr + 1));

	printf("Size of Feld %d\n", sizeof(lottozahlen));
	printf("Size of Ptr %d\n", sizeof(ptr));

	*/
	return 0;


}


