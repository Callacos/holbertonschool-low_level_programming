#include "main.h"

/**
 * _isupper - Vérifie si un caractère est en majuscule
 * @c: Le caractère à vérifier, sous forme d'entier ASCII
 *
 * Description: Cette fonction prend un caractère sous forme
 * d'entier (code ASCII) et détermine s'il s'agit d'une lettre
 * majuscule. Elle retourne 1 si le caractère est une majuscule
 * (entre 'A' et 'Z' en ASCII), sinon elle retourne 0.
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
