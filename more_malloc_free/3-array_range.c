#include <stdlib.h>
/**
* array_range - créé un tableau d'entier
*@min: valeur minnimale
*@max: valeur maximale
*
*Return: retourne NULL en cas d'échec
*/
int *array_range(int min, int max)
{

	int *array;
	int i, size;

	if (min > max)

	return (NULL);

	size = max - min + 1;



	array = malloc(size * sizeof(int));
	if (array == NULL)

	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}
