#include "main.h"

/**
 * puts2 - Imprime chaque deuxième caractère d'une chaîne
 * @str: La chaîne d'entrée
 *
 * Description: Cette fonction imprime chaque caractère
 * sur deux, en commençant par le premier caractère,
 * suivi d'un saut de ligne.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] != '\0')
			i++;
	}
	_putchar('\n');
}
