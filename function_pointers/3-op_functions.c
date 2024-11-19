#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*op_add - returns the sum of a and b
*@a: dividende
*@b: diviseur
*
*Return: return final resultat
*/
int op_add(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero is not allowed.\n");
	exit(0);
	}

	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero is not allowed.\n");
	exit(0);
	}

	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero is not allowed.\n");
	exit(0);
	}

	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the result of the division, or exits if division by zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero is not allowed.\n");
	exit (0);
	}

	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder of the division, or exits if division by zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero is not allowed.\n");
	exit(0);
	}

	return (a % b);
}
