#include "main.h"

/**
 * _strstr - Recherche la première occurrence d'une sous-chaîne
 * @haystack: Pointeur vers la chaîne principale où chercher
 * @needle: Pointeur vers la sous-chaîne à rechercher dans `haystack`
 *
 * Description: Cette fonction parcourt `haystack` pour trouver la première
 * occurrence de `needle`. Si `needle` est trouvé, elle retourne un pointeur
 * vers le début de `needle` dans `haystack`. Sinon, elle retourne `NULL`.
 *
 * Return: Pointeur vers le début de `needle` dans `haystack`, ou `NULL`
 * si `needle` n'est pas trouvé.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n; /* Pointeurs pour parcourir `haystack` et `needle` */

	/* Si `needle` est une chaîne vide, retourne `haystack` */
	if (*needle == '\0')
	{
		return (haystack);
	}

	/* Parcourt chaque caractère de `haystack` */
	while (*haystack)
	{
		h = haystack; /* `h` pointe sur la position actuelle de `haystack` */
		n = needle; /* `n` pointe au début de `needle` */

		/* Compare les caractères de `haystack` et `needle` */
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++; /* Passe au caractère suivant dans `haystack` */
	}

	return (NULL);
}
