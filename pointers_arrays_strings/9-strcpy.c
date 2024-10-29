#include "main.h"

/**
 * _strcpy - Copie la chaîne pointée par src vers dest
 * @dest: Le buffer de destination
 * @src: La chaîne source à copier
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
