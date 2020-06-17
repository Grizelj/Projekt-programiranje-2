#define _CRT_SECURE_NO_WARNINGS
#include "MyHeader.h"

char* dateTime() {
	time_t current_time;
	char* c_time_string;

	current_time = time(NULL);

	if (current_time == ((time_t)-1))
	{
		(void)fprintf(stderr, "Failure to obtain the current time.\n");
		exit(EXIT_FAILURE);
	}

	c_time_string = ctime(&current_time);

	if (c_time_string == NULL)
	{
		(void)fprintf(stderr, "Failure to convert the current time.\n");
		exit(EXIT_FAILURE);
	}
	return c_time_string;
}

void swap(struct player *p1, struct player* p2) {
	struct player temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubbleSortDesc(playerScore *array, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (array[j + 1].score > array[j].score) {
				swap(&array[j + 1], &array[j]);

			}
		}
	}
}