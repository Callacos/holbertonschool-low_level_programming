#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'une nouvelle ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction parcourt chaque caractère de la chaîne `str`
 * et l'affiche en utilisant `_putchar`. Une fois la chaîne terminée,
 * elle ajoute un saut de ligne.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
