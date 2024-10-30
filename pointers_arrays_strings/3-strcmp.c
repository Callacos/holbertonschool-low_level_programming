#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne à comparer
 * @s2: Deuxième chaîne à comparer
 *
 * Description: Cette fonction compare les deux chaînes de caractères
 * `s1` et `s2` caractère par caractère. Elle retourne un nombre négatif
 * si `s1` est inférieure à `s2`, zéro si elles sont égales, ou un
 * nombre positif si `s1` est supérieure à `s2`.
 *
 * Return: Un entier représentant la différence entre les deux chaînes.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
