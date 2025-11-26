// Tag2_01Unterprogramme.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <stdio.h>

#include "MyIo.h"
#include "MyMath.h"



void unter(int a)
{
    
    a = 100;
    printf("%d\n", a);
    return;
}



int main()
{

    myGlobal = 100;

    int x = 10;
    int y = 20;

    unter(x);
    unter(y);
    unter(30);

    printf("%d\n", x);
    return 0;
}

