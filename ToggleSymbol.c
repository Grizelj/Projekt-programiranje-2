#include <stdio.h>

extern char symbol;

void toggleSymbol()
{
	if (symbol == 'X')
	{
		symbol = 'O';
	}
	else
	{
		symbol = 'X';
	}
}