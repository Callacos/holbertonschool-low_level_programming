#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (num = 10; num < 16; num++)
	{
		putchar(num - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
