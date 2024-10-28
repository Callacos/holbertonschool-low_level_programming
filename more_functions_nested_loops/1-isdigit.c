#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre
 * @c: Le caractère à vérifier, sous forme d'entier ASCII
 *
 * Description: Cette fonction vérifie si le caractère fourni
 * correspond à un chiffre (0-9) en utilisant les valeurs ASCII.
 * Elle retourne 1 si le caractère est un chiffre, sinon 0.
 *
 * Return: 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
