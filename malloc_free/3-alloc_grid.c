#include <stdlib.h>

/**
 * alloc_grid - Crée un tableau 2D d'entiers et initialise
 * chaque élément à 0
 * @width: La largeur du tableau (nombre de colonnes)
 * @height: La hauteur du tableau (nombre de lignes)
 *
 * Description: Cette fonction alloue de la mémoire pour
 * un tableau 2D d'entiers
 * dont chaque élément est initialisé à 0. Si la largeur
 * ou la hauteur est nulle
 * ou négative, ou si l'allocation échoue, elle retourne NULL.
 *
 * Return: Un pointeur vers le tableau 2D alloué, ou NULL en cas d'erreur
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (k = 0; k < i; k++)
	{
	free(grid[k]);
	}
	free(grid);
		return (NULL);
	}
	}

	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}

	return (grid);
}

