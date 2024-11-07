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

	int i;

	for ( i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}


