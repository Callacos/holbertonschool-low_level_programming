#include "main.h"

/**
 * leet - Encode une chaîne de caractères en 1337.
 * @str: La chaîne de caractères à encoder.
 *
 * Description: Remplace les lettres spécifiques par les chiffres associés
 * pour créer un texte en "1337 speak". Les lettres a et A deviennent 4,
 * e et E deviennent 3, o et O deviennent 0, t et T deviennent 7,
 * et l et L deviennent 1.
 *
 * Return: Un pointeur vers la chaîne encodée `str`.
 */
char *leet(char *str)
{
	int i = 0;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "43071";

	while (str[i] != '\0')
	{
		int j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j / 2];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
