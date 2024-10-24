#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre.
 * @n: Le nombre dont on veut obtenir le dernier chiffre.
 *
 * Return: La valeur du dernier chiffre du nombre.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);
}
