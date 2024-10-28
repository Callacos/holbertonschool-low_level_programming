#include "main.h"
#include <unistd.h>
/**
 * print_numbers - Imprime les chiffres de 0 à 9
 *
 * Description: Cette fonction imprime les chiffres de 0 à 9,
 * chacun suivi d'un espace, puis un saut de ligne à la fin.
 */
void print_numbers(void)
{
	char str[] = "0123456789";

	   write(1, str, 10);
	_putchar('\n');
}

