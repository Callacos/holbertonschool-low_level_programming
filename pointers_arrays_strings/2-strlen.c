#include "main.h"

/**
 * _strlen - Renvoie la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Return: La longueur de la chaîne de caractères
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}
