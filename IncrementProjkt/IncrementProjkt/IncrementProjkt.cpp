// IncrementProjkt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int main()
{
    char buffer[] = "Hallo";
    char* ptr = buffer;

    printf("%s\n", ptr);
    while (*ptr) {
        printf("%c", *ptr++);
    }
    
    


}

