#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - fonction qui concène 2 chaines
 * @s1: première chaine
 * @s2: deuxième chaine
 * @n: nombre de charactère
 *
 * Return: retourne str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sdest;
	unsigned int i, j;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	sdest = malloc((l1 + n + 1) * sizeof(char));
	if (sdest == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		sdest[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		sdest[i + j] = s2[j];
	}
	sdest[i + j] = '\0';

	return (sdest);
}
