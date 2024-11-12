#include <stdlib.h>
/**
* create_array - fonction qui alloue un tableau de char en
* fonction d'une taille dynamique
*@size: c'est la taille du tableau a créé
*@c: remplie chaque element du tableau avec le char c
*
*
*Return: un pointeur vers lequel le tableau créé, ou NULL
* si la taille est 0
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int	i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
