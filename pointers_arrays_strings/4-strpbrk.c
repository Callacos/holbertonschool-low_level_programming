#include "main.h"

/**
 * _strpbrk - Recherche la première occurrence d'un des caractères
 * @s: Pointeur vers la chaîne de caractères principale
 * @accept: Pointeur vers la chaîne contenant les caractères à chercher
 *
 * Description: Cette fonction parcourt `s` et vérifie si chaque caractère
 * est présent dans `accept`. Dès qu'un caractère correspondant est trouvé,
 * elle retourne un pointeur vers ce caractère dans `s`.
 *
 * Return: Pointeur vers le premier caractère de `s` présent dans `accept`,
 * ou `NULL` si aucun caractère correspondant n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a; /* Pointeur pour parcourir `accept` */

	/* Parcourt chaque caractère de `s` */
	while (*s)
	{
		for (a = accept; *a; a++) /* Parcourt chaque caractère de `accept` */
		{
			if (*s == *a) /* Vérifie si le caractère de `s` est dans `accept` */
			{
				return (s);
			}
		}
		s++; /* Passe au caractère suivant dans `s` */
	}

	return (NULL);
}
