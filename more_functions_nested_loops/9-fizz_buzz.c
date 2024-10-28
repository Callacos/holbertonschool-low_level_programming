#include <stdio.h>

/**
 * main - Programme FizzBuzz qui affiche les nombres de 1 à 100
 * Description: Affiche Fizz pour les multiples de 3
 * Buzz pour les multiples de 5,
 * et FizzBuzz pour les multiples de 3 et 5.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
