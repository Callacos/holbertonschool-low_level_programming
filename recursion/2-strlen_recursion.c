#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères
 * dont on veut connaître la longueur.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);	/* Fin de la chaîne */
	return (1 + _strlen_recursion(s + 1));
}
