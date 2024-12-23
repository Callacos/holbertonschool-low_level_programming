#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
if ((*n & (1 << index)) != 0)
{
	return (-1);
}

	*n = *n | (1 << index);
	return (1);
}
