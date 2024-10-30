#include "main.h"

/**
 * _strncpy - Copie une chaîne de caractères avec une limite de taille
 * @dest: Chaîne de destination où la source sera copiée
 * @src: Chaîne source à copier
 * @n: Nombre maximum de caractères à copier depuis src
 *
 * Description: Cette fonction copie au plus `n` caractères de `src`
 * vers `dest`. Si `src` est plus court que `n`, le reste de `dest`
 * est rempli avec des caractères nuls (`\0`).
 *
 * Return: Retourne un pointeur vers la chaîne résultante `dest`.
 */
char *_strncpy(char *dest,  char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	while (i < n)
		{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
