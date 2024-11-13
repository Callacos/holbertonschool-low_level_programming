#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D d'entiers alloué par alloc_grid
 * @grid: Pointeur vers le tableau 2D à libérer
 * @height: Hauteur du tableau (nombre de lignes)
 *
 * Description: Cette fonction parcourt chaque ligne du tableau 2D pour
 * libérer la mémoire allouée pour chaque pointeur de ligne. Ensuite,
 * elle libère le tableau principal des pointeurs de lignes.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
