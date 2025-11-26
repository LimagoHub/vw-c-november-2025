#include "MyMath.h"

int myGlobal = 10;

double sub(double a, double b)
{
	return help(a, -b);
}

double add(double a, double b)
{
	return help(a, b);
}

static double help(double a, double b)
{
	return a + b;
}
