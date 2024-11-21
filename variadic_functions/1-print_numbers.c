#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - fonction qui imprime des nombres suivi
* d'une nouvelle ligne
*@separator: chaine qui imprime entre deux nombre
*@n: le nombre a integere
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

	int num = va_arg(args, int);

	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}

	printf("\n");

	va_end(args);
}
