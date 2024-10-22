#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point of the program
 *
 * Description:
 * This program generates a random number and checks its last digit.
 * It prints the last digit of the number along with a message indicating
 * whether the last digit is greater than 5, equal to 0, or less than 6
 * and not equal to 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator with the current time */
	n = rand();  /* The variable n will store a different value each time */

	int last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}

	return (0);
}
