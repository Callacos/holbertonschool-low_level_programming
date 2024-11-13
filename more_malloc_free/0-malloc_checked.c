#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - fonction qui alloue la mémoire en malloc
*@b: taille en octets de la mémoire
*
*Return: retourne ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		exit(98);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
