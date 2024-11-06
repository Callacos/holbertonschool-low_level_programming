#include "main.h"

/**
 * _sqrt_recursion - trouve la racine carrée naturelle d'un nombre
 * @n: le nombre dont on veut la racine carrée
 * @guess: la tentative actuelle de racine carré
 * Return: la racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - fonction auxiliaire pour calculer la racine carrée
 * @n: le nombre dont on cherche la racine carrée
 * @guess: la tentative actuelle de racine carrée
 *
 * Return: la racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	else if (guess * guess > n)
	return (-1);
	else
	return (_sqrt_helper(n, guess + 1));
}
