#include "main.h"

/**
 * _strspn - Calcule la longueur d'un segment de préfixe d'une chaîne
 * @s: Pointeur vers la chaîne principale à parcourir
 * @accept: Pointeur vers la chaîne contenant les caractères autorisés
 *
 * Description: Cette fonction parcourt les caractères initiaux de `s`
 * pour compter combien d'entre eux appartiennent à `accept`. Elle s'arrête
 * dès qu'un caractère n'appartenant pas à `accept` est rencontré.
 *
 * Return: Nombre d'octets dans le segment initial de `s` qui sont
 * présents dans `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a; /* Pointeur pour parcourir `accept` */

	while (*s)
	{
		for (a = accept; *a; a++) /* Parcourt chaque caractère de `accept` */
		{
			if (*s == *a) /* Vérifie si le caractère de `s` est dans `accept` */
			{
				count++;
				break;
			}
		}
		/* Si aucun caractère de `accept` n'a été trouvé, on arrête */
		if (*a == '\0')
		{
			return (count); /* Retourne la longueur du segment de préfixe */
		}
		s++; /* Passe au caractère suivant dans `s` */
	}

	return (count);
}
