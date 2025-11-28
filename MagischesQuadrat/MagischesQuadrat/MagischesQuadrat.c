// MagischesQuadrat.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Quadrat.h"


int main()
{
    int dimension;
    printf("Bitte geben Sie die Dimension fuer das magische Quadrat an: ");
    scanf_s("%d", &dimension);

    if (dimension % 2 == 0)
    {
        printf("Nur ungerade Dimensionen sind erlaubt! Programmende\n");
        return -1;
    }

    draw_magic_square(dimension);

	//

    /*int size = 10;
    int *feld = malloc(size * sizeof(int));

    int **matrix ;

    matrix = malloc(4 * sizeof(int*));
    for (int i = 0; i < 4; ++i)
    {
        matrix[i] = malloc(3 * sizeof(int));
    }

    matrix[2][1] = 5;


    int* m2 = malloc(4 * 3 * sizeof(int));

    int zeile = 2;
    int spalte = 3;

    m2[2 * spalte + 1] = 2;


    char ort1[] = "Wolfsburg";
    char ort2[] = "Frankfurt";

    char* ptr1 = ort1;
    char* ptr2 = ort2;

    char * staedte[] = { "Wolfsburg", "Frankfurt" };

    char buchstabe = staedte[1][1];
    char* ort = staedte[0];


    printf("%c\n", buchstabe);

    printf("%s\n", ort);
    printf("%p\n", ort);

    printf("%c\n", *ort);
    printf("%c\n", ort[0]);
    printf("%c\n", staedte[0][0]);
    */
}

