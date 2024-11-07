#include <stdio.h>
#include <stdlib.h>
/**
* main - imprime un argument dans un programme
* @argc: number of arguments
* @argv: array of argument
* Return: toujours 0
*/
int main(int argc, char *argv[])
{
	int nombre1, nombre2, resultat;
	if (argc != 3)
	{
	printf("Error\n");
	return (0);
	}

	 nombre1 = atoi(argv[1]);
	 nombre2 = atoi(argv[2]);
	 resultat = nombre1 * nombre2;

	printf("%d\n", resultat);
	return (0);
}
