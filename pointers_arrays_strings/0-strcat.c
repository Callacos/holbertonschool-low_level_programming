#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: Chaîne de destination
 * @src: Chaîne source à ajouter
 *
 * Description: Cette fonction ajoute la chaîne pointée par src à la fin de
 * la chaîne pointée par dest Elle écrase le caractère nul ('\0') à la fin
 * de dest, puis ajoute un nouveau caractère nul à la fin du résultat.
 *
 * Return: Un pointeur vers la chaîne résultante dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * reset_to_98 - Réinitialise la valeur pointée à 98
 * @n: Pointeur vers l'entier à modifier
 *
 * Description: Cette fonction prend un pointeur vers un entier et change
 * la valeur pointée à 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

