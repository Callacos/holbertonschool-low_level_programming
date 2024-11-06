#include <stdio.h>

/**
 * main - affiche le nom du programme suivi d'un retour à la ligne
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau contenant les arguments passés au programme
 *
 * Return: (0) pour indiquer le succès
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Ignorer argc car il n'est pas utilisé ici */

	/* Imprimer le nom du programme */
	printf("%s\n", argv[0]);

	return (0);
}

