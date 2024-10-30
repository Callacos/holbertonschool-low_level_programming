#include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractères avec une limite de taille
 * @dest: Chaîne de destination, où `src` sera ajoutée
 * @src: Chaîne source à ajouter à la fin de `dest`
 * @n: Nombre maximum de caractères à copier depuis `src`
 *
 * Description: Cette fonction est similaire à `_strcat`, sauf qu'elle
 * ajoute au plus `n` caractères de `src` à `dest`. Si `src` contient `n`
 * caractères ou plus, elle n'a pas besoin d'être terminée par un caractère nul (`\0`).
 *
 * @return: Retourne un pointeur vers la chaîne résultante `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier au plus n caractères de src dans dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul à la fin de dest */
	dest[i] = '\0';

	return dest;
}
