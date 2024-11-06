#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre
 * @n: Le nombre dont on veut la factorielle
 *
 * Return: La factorielle de n ou -1 si n est négatif
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
	return (1);
	return (factorial(n - 1) * n);
}
