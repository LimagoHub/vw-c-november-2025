// Schweinerei.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Schwein.h"

int main()
{
    Schwein * piggy = malloc(sizeof(Schwein));
    Schwein *babe = malloc(sizeof(Schwein));

    schwein_init(piggy);
    schwein_set_name(piggy, "Miss Piggy");

    
    

    schwein_fuettern(piggy);

    

    schwein_print(piggy);
    free(piggy);
    
    free(babe);

    
}

