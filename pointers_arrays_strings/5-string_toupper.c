#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules
 * d'une chaîne en majuscules
 * @str: Chaîne de caractères à modifier
 *
 * Description: Cette fonction parcourt la chaîne `str` et
 * convertit chaque lettre
 * minuscule en majuscule. Les autres caractères restent inchangés.
 *
 * Return: Un pointeur vers la chaîne modifiée `str`.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	}
	i++;
	}

	return (str);
}
