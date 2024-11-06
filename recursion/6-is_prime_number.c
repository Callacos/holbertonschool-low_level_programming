#include "main.h"

/**
 * is_prime_number - aide récursive pour vérifier si un nombre est premier
 *
 * @n: le nombre à vérifier
 * @i: le diviseur actuel à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - aide récursive pour vérifier si un nombre est premier
 * @n: le nombre à vérifier
 * @i: le diviseur actuel à tester
 *
 * Return: 1 si n est premier, 0 sinon
 *
 * Description: Cette fonction auxiliaire est appelée par is_prime_number et
 * vérifie si n est divisible par i. Elle augmente i à chaque appel récursif
 * jusqu'à la racine carrée de n.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	return (1);
	if (n % i == 0)
	return (0);
	return (is_prime_helper(n, i + 1));
}
