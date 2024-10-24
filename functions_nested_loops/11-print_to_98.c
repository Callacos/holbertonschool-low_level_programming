#include"main.h"
#include<stdio.h>

/**
 * print_number - Prints a number.
 * @n: The number to print.
 *
 * Description: Converts an integer to its character representation
 * and outputs each digit using _putchar.
 */
void print_number(int n)
{
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
	}
/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The starting number to print from.
 *
 * Description: Numbers are printed in order, separated by a comma and
 * a space. The sequence ends at 98.
 */
void print_to_98(int n)
	{
	if (n <= 98)
	{
		while (n < 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		}
		else
		{
		while (n > 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

