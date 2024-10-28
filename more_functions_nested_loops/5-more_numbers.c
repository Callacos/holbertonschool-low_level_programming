#include "main.h"
#include <unistd.h>

/**
 * more_numbers - Imprime les nombres de 0 à 14, dix fois
 *
 * Description: Cette fonction imprime les nombres de 0 à 14,
 * suivis d'un saut de ligne, dix fois, en utilisant _putchar trois fois.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
	if (i > 9)
	{
		_putchar('1');

		}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

