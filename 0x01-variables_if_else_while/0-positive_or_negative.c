#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n and prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else
		printf("is zero");

	printf("\n");

	return 0;
}

