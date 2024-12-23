#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction donnée
 *sur chaque élément d'un tableau.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @action: Pointeur vers la fonction à appliquer.
 *
 * Description: Cette fonction parcourt le tableau et applique la fonction
 * pointée par @action à chaque élément.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
