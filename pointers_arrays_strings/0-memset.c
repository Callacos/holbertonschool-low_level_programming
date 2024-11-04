#include "main.h"
/**
 * _memset - Remplit une zone mémoire avec un octet constant
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: Octet constant utilisé pour remplir la mémoire
 * @n: Nombre d'octets à remplir avec l'octet `b`
 *
 * Description: Cette fonction remplit les `n` premiers octets de la zone
 * mémoire pointée par `s` avec la valeur constante `b`. Elle retourne
 * un pointeur vers le début de la zone mémoire `s`.
 *
 * Return: Pointeur vers la zone mémoire `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
