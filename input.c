#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern char symbol;

void input(char* x) {

	int n;

	printf("Input your field of choice: \n");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		if (*(x + 0) == '1')
		{
			*(x + 0) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}

		break;

	case 2:
		if (*(x + 1) == '2')
		{
			*(x + 1) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 3:
		if (*(x + 2) == '3')
		{
			*(x + 2) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 4:
		if (*(x + 3) == '4')
		{
			*(x + 3) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 5:
		if (*(x + 4) == '5')
		{
			*(x + 4) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 6:
		if (*(x + 5) == '6')
		{
			*(x + 5) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 7:
		if (*(x + 6) == '7')
		{
			*(x + 6) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 8:
		if (*(x + 7) == '8')
		{
			*(x + 7) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	case 9:
		if (*(x + 8) == '9')
		{
			*(x + 8) = symbol;
		}
		else
		{
			do {
				printf("Field is already occupied, input an unoccupied field:\n");
				scanf("%d", &n);
			} while (*(x + (n - 1)) == 'X' || *(x + (n - 1)) == 'O');
			*(x + (n - 1)) = symbol;
		}
		break;

	default:
		do {
			printf("Nonexistent field, input another field:\n");
			scanf("%d", &n);
		} while (n < 1 || n > 9);
		*(x + (n - 1)) = symbol;

	}
}