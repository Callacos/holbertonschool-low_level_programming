#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Pointeur vers le premier élément du tableau
 * @n: Nombre d'éléments dans le tableau
 *
 * Description: Cette fonction inverse l'ordre des éléments dans un tableau
 * d'entiers en échangeant les éléments du début et de la fin
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
