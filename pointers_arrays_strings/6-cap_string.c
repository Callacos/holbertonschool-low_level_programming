#include "main.h"
/**
 * cap_string - Capitalise tous les mots d'une chaîne
 * @str: Chaîne de caractères à modifier
 *
 * Description: Parcourt chaque caractère de la chaîne `str` et
 * capitalise le premier caractère de chaque mot, en fonction des
 * séparateurs spécifiés (espace, tabulation, nouvelle ligne, etc.).
 *
 * Return: Un pointeur vers la chaîne modifiée `str`.
 */

char *cap_string(char *str)
{
int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	i++;

	while (str[i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0')

		{
			if (str[i - 1] == sep[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}

