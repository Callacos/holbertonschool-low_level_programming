#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func - function qui selectionne la bonne function
*pour effectuer l'opération demandé par le user.
*@s: l'operateur passé a la string
*
*Return: retourne NULL si s=NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL || s[0] == '\0')
		return (NULL);

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

