#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			started = 1;
		}
		else if (started)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
