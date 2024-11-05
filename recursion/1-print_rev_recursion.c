#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères en ordre inverse.
 * @s: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction utilise la récursion pour atteindre le
 *              dernier caractère de la chaîne, puis affiche chaque
 *              caractère en remontant dans la pile d'appels.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')	/* Vérifie si on n'a pas atteint la fin de la chaîne */
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

