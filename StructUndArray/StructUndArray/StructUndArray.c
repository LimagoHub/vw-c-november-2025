// StructUndArray.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    double real;
    
    double imag;
} Komplex;

typedef struct
{
    char name[100];
    int gewicht;
} Schwein;


// Deklaration * aendert den Typ (d.h. Aus Kompkex wird Kopmplex Pointer)

void myScanfFuerKomplex(Komplex* numberToRead)
{
    printf("Bitte Realteil eingeben: ");
    scanf_s("%lf", &(numberToRead->real));
    printf("Bitte Imagteil eingeben: ");
    scanf_s("%lf", &(numberToRead->imag));
}


void printKomplex(const Komplex* numberToPrint)
{
    printf("Realteil: %lf\n", numberToPrint->real);
    printf("Imagteil: %lf\n", numberToPrint->imag);
    
}


int main()
{

    char myName[] = "Miss Piggy";

    Schwein piggy;
    strcpy_s(piggy.name,  myName , 99);
    piggy.gewicht = 10;

    //strcpy(myName, "Babe");

    /*Komplex x;
    myScanfFuerKomplex(&x);

    Komplex* ptr = &x;

    printf("%d\n", sizeof(ptr));

    printf("%lf\n", x.real);
    printf("%lf\n", (*ptr).real);
    printf("%lf\n", ptr->real);

    printKomplex(&x);
    printf("%lf\n", x.real);

    int feld[] = {10,20,30};
    Komplex peter[] = {
	    {10,10},
    	{20,20},
    	{30,30}
    };

    */



}

