#include "main.h"

/**
 * _memcpy - Copie une zone mémoire d'une source vers une destination
 * @dest: Pointeur vers la zone mémoire de destination
 * @src: Pointeur vers la zone mémoire source à copier
 * @n: Nombre d'octets à copier de `src` vers `dest`
 *
 * Description: Cette fonction copie les `n` premiers octets de la zone
 * mémoire pointée par `src` vers la zone mémoire pointée par `dest`.
 * Elle retourne un pointeur vers la zone mémoire `dest`.
 *
 * Return: Pointeur vers la zone mémoire `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* Déclaration de la variable pour l'index */

	/* Boucle pour copier chaque octet de `src` vers `dest` */
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i); /* Copie l'octet `i` de `src` vers `dest` */
	}
	return (dest); /* Retourne le pointeur `dest` vers la zone modifiée */
}
