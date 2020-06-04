#include <stdio.h>
#include <stdlib.h>

extern char symbol;

void displayBoard(char* x)
{
	system("cls");
	printf("\n\t\t    Tic  Tac  Toe  \n");
	printf("\n\t\t         |         |        ");
	printf("\n\t\t     %c   |    %c    |   %c   ", *(x + 0), *(x + 1), *(x + 2));
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c   ", *(x + 3), *(x + 4), *(x + 5));
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c   ", *(x + 6), *(x + 7), *(x + 8));
	printf("\n\t\t         |         |        \n");

}