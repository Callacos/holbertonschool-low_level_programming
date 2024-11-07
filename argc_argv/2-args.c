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
	(void)argc;
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}


