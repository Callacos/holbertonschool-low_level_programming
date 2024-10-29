#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à inverser.
 *
 * Description: Cette fonction inverse la chaîne `s` en permutant
 * les caractères depuis le début jusqu'à la fin de la chaîne
 * jusqu'à atteindre le milieu.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
