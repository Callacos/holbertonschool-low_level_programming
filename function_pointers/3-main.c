#include "3-calc.h"
#include <stdlib.h>
/**
* main - Entry point
* @argc: The number of arguments
* @argv: An array of arguments
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (1);
	}

	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}

