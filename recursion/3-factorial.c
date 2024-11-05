#include "main.h"
#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre
 * @n: Le nombre dont on veut la factorielle
 *
 * Return: La factorielle de n ou -1 si n est négatif
 */

int factorial(int n)
{
	int resultat = 1;
	int i;

	if (n < 0)
		return (-1);


	for (i = 1; i <= n; i++)
	{
		resultat *= i;
	}
	return (resultat);
}
