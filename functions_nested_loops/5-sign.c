#include "main.h"
/**
 * print_sign - Imprime le signe d'un nombre.
 * @n: Le nombre dont le signe sera vérifié.
 *
 * Description:
 * Cette fonction vérifie la valeur de l'entier `n` et imprime son signe.
 * - Si `n` est supérieur à zéro, elle imprime '+' et retourne 1.
 * - Si `n` est égal à zéro, elle imprime '0' et retourne 0.
 * - Si `n` est inférieur à zéro, elle imprime '-' et retourne -1.
 *
 * Return: 1 si `n` est positif, 0 si `n` est zéro, -1 si `n` est négatif.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('0');
	return (-1);
	}
}

