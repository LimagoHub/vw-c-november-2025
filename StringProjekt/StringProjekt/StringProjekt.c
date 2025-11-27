// StringProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
//#include <string.h>

size_t string_length(const char * const string)
{
	size_t counter = 0;

    while (*(string + counter))
    {
        
        counter++;
    }

    return counter;
}

void string_copy(char * destination, const char * source)
{
   while (*destination++ = *source++);
}


int main()
{
    //char text[] = {'H','a',0};
    char text[] = "Hallo Welt";
    char buffer[20];// Mindestens 11 fuer Hallo Welt

    string_copy(buffer, text);

    printf("buffer: %s\n", buffer);

    printf("Laenge %ld\n", string_length(text));





    //size_t lange = strlen(text);

    /*text[0] = 'H';
    text[1] = 'a';
    text[2] = 'l';
    text[3] = 'l';

    text[5] = '\0';
    text[5] = 0;
	*/
    printf("%s\n", text);

}

