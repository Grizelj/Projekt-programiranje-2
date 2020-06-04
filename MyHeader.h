#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct player {
	char name[20];
	int score;
};

typedef struct
{
	char name[20];
	int score;
}playerScore;


char* dateTime();
void displayBoard(char* x);
void input(char* x);
void toggleSymbol();
char winner(char* x);
void swap(int* big, int* small);
void bubbleSortDesc(int* array, int n);

#endif