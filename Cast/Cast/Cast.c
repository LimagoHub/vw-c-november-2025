// Cast.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

typedef struct { int x; } A;
typedef struct { int y; int z; } B;

int main()
{
    unsigned int x = 0xFF0000FF;
    unsigned int* ptr = &x;
    unsigned char* cptr;

    cptr = (unsigned char*)ptr;

    printf("%u\n", x);
    printf("%u\n", *cptr++);
    printf("%u\n", *cptr);
}

