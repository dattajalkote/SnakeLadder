

#include "Dice.h"
#include <cstdlib>
#include <ctime>

int Dice::Roll()
{
	std:srand(time(0));
	return (rand() % 6) + 1;
}