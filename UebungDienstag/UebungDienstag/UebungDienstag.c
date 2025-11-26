// UebungDienstag.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

#include "MyMath.h"

//double squareroot(double quadratzahl);


typedef int peter;

typedef struct 
{
	double real;
	double imag;
} Komplex;

typedef struct
{
	double x;
	double y;
} Punkt;

typedef struct
{
	Punkt start;
	Punkt end;
} Linie;


void printKomplex(Komplex a)
{
	printf("Real =%lfd, Imag=%lf", a.real, a.imag);
}

int main()
{
	Linie linie = {{1,2}, {3,4}};
	

	Punkt start = {3.1, 7.4};
	Punkt end;
	end.x = 5;
	end.y = 7;

	Komplex x;
	x.real = 5;
	x.imag = 3.2;


	printf("%d", sizeof(long));
   //printf("Produkt = %ld \n", mult(3,4));
}

