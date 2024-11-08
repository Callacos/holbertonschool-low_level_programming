#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - Programme qui ajoute des nombres positifs
*@argc: number of arguments
*@argv: array of argument
*
* Return: return 0 for say code is good and 1 if the code is bad
*/
int main(int argc, char *argv[])
{
	int somme = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
	}

	printf("%d\n", somme);
	return (0);
}
