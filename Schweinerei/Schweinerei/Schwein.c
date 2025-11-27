#include <stdio.h>
#include <string.h>
#include "Schwein.h"

void schwein_init(Schwein* schwein)
{
	schwein->gewicht = 10;
	strcpy_s(schwein->name, 50, "Nobody");
}
void schwein_set_name(Schwein* schwein, const char* neuerName)
{
	strcpy_s(schwein->name, 50, neuerName);
}
void schwein_fuettern(Schwein* schwein)
{
	schwein->gewicht++;
}
void schwein_print(const Schwein* schwein)
{
	printf("Schwein: Name=%s, Gewicht=%d\n", schwein->name, schwein->gewicht);
}