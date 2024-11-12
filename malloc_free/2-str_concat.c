#include <stdlib.h>
/**
 *str_concat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 *
 * Description: Retourne un pointeur vers un espace
 * mémoire nouvellement alloué,
 * contenant les chaînes s1 et s2 concaténées, suivies d'un caractère nul.
 * Si s1 ou s2 est NULL, il est traité comme une chaîne vide.
 *
 * Return: Un pointeur vers la chaîne concaténée ou NULL en cas d'échec.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
