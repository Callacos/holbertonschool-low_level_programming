#include "main.h"

/**
 * _strchr - Recherche la première occurrence d'un caractère dans une chaîne
 * @s: Pointeur vers la chaîne de caractères à parcourir
 * @c: Caractère à rechercher dans la chaîne `s`
 *
 * Description: Cette fonction parcourt la chaîne `s` pour trouver
 * la première occurrence du caractère `c`. Si elle le trouve,
 * elle retourne un pointeur vers cette position dans `s`.
 * Si le caractère n'est pas trouvé, elle retourne `NULL`.
 *
 * Return: Pointeur vers la première occurrence de `c` dans `s`,
 * ou `NULL` si le caractère n'est pas présent.
 */
char *_strchr(char *s, char c)
{
	while (*s) /* Parcourt chaque caractère de la chaîne */
	{
		if (*s == c) /* Vérifie si le caractère courant est `c` */
		{
			return (s);
		}
		s++; /* Passe au caractère suivant */
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL); /* Retourne NULL si `c` n'est pas trouvé dans la chaîne */
}
