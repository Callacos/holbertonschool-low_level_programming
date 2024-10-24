#include"main.h"
#include<stdio.h>

/**
 * print_to_98-Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n:The starting number to print from.
 *
 * Description:Numbers are printed in order, separated by a comma and
 * a space.The sequence ends at 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d,", n);
			n++;
		}
		}
		else
		{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
		}
	}
	printf("%d\n", 98);
}

