#include "main.h"

/**
 * puts_half - Imprime la deuxième moitié d'une chaîne
 * @str: La chaîne à traiter
 *
 * Description: Si la chaîne a un nombre impair de caractères,
 * elle imprime la dernière n caractères
 * où n = (longueur de la chaîne - 1) / 2.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;


	while (str[len] != '\0')
		len++;


	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;


	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
