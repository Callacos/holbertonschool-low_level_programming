#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*
	 * Programme pour générer un nombre aléatoire et déterminer
	 * s'il est positif, négatif ou zéro.
	 * Le nombre est affiché suivi de son évaluation.
	 */
	int n;

	/* Initialisation de la générateur de nombres aléatoires */
	srand(time(0)); /* Semence du générateur avec l'heure actuelle */
	n = rand() % (RAND_MAX / 2 + 1);
	n = (n * 2) - (RAND_MAX / 2);

	/* Affichage du nombre */
	printf("%d ", n);

	/* Condition pour déterminer si n est positif, négatif ou zéro */
	if (n > 0)
	{
		printf("is positive\n"); /* Si n est positif */
	}
	else if (n == 0)
	{
		printf("is zero\n"); /* Si n est zéro */
	}
	else
	{
		printf("is negative\n"); /* Si n est négatif */
	}

	return (0);
}
