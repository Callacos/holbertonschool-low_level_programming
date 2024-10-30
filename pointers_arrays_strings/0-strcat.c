#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: Chaîne de destination, où src sera ajoutée
 * @src: Chaîne source à ajouter à la fin de dest
 *
 * Cette fonction parcourt dest pour trouver sa fin, puis
 * copie les caractères de src à la suite de dest.
 * La chaîne résultante est terminée par un caractère nul (\0).
 * Retourne un pointeur vers la chaîne résultante dest.
 *
 *Return: Retourne un pointeur vers la chaine résultante 'dest'.
 */
void reset_to_98(int *n)
{
    *n = 98;
}
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier les caractères de src dans dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul à la fin de dest */
	dest[i] = '\0';

	return (dest);
}
