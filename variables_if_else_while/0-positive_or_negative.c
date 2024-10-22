#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


/* Print the generated number */
	printf("%d ", n);
/* Determine if n is positive, negative, or zero */
	if (n > 0)
	{
		printf("is positive\n"); /* If n is positive */
	}
	else if (n == 0)
	{
		printf("is zero\n"); /* If n is zero */
	}
	else
	{
		printf("is negative\n"); /* If n is negative */
	}

	return (0);
}

