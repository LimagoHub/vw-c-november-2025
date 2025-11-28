#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <assert.h>
#include "Quadrat.h"


static int** square;
static int dim;

static void create_square()
{
	square = (int **) malloc(dim * sizeof(int*));
	assert(square != NULL);
	for (int i = 0; i < dim; i++)
	{
		square[i] = (int *) malloc(dim * sizeof(int));
		assert(square[i] != NULL);
		memset(square[i], 0, dim * sizeof(int));
	}
}

static void fill_square()
{
	int zeile = 0;
	int spalte = dim / 2;

	for (int item = 1; item <= dim * dim; ++item)
	{
		square[zeile][spalte] = item;
		if (item % dim == 0)
		{
			zeile++;
		} else
		{
			spalte++;
			zeile--;
		}

		// Korrektur
		zeile %= dim;
		spalte %= dim;

		zeile = zeile < 0 ? dim - 1 : zeile;


	}
}

static void print_square()
{
	for (int zeile = 0; zeile < dim; zeile ++)
	{
		for (int spalte = 0; spalte < dim ; spalte ++)
		{
			printf("%3d |\t", square[zeile][spalte]);
		}
		printf("\n");
	}
}

static void free_memory()
{
	for (int i = 0; i < dim; ++i)
	{
		free(square[i]);
	}

	free(square);
}

void draw_magic_square(int dimension)
{
	dim = dimension;
	create_square();
	fill_square();
	print_square();
	free_memory();
}