#include "main.h"

/**
 * print_number - Prints a number.
 * @n: The number to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10)
	print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
	print_number(n);
	_putchar(',');
	_putchar(' ');
	n += (n < 98) ? 1 : -1;
	}
	print_number(98);
	_putchar('\n');
}

