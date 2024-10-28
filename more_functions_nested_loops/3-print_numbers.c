#include "main.h"

/**
 * print_numbers - Imprime les chiffres de 0 à 9
 *
 * Description: Cette fonction imprime les chiffres de 0 à 9,
 * chacun suivi d'un espace, puis un saut de ligne à la fin.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
