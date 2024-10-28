#include "main.h"

/**
*print_most_numbers - imprime les chiffres de 0 a 9 sauf 2 et 4
*description: cette fonction imprime
*
*/
void print_most_numbers(void)
{
	char str[] = "01356789";

	write(1, str, 8);
	_putchar('\n');
}
