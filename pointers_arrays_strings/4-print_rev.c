#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en ordre inverse.
 * @s: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction parcourt la chaîne `s` jusqu'à son
 * caractère nul, puis affiche les caractères dans l'ordre inverse
 * en utilisant la fonction `_putchar`. Elle termine en ajoutant
 * un saut de ligne.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
