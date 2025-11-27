#pragma once


typedef struct
{
	char name[50];
	int gewicht;
} Schwein;

void schwein_init(Schwein * schwein);
void schwein_set_name(Schwein* schwein, const char* neuerName);
void schwein_fuettern(Schwein* schwein);
void schwein_print(const Schwein* schwein);