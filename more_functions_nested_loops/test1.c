#include "main.h"


void print_diagonale(int n)
{
 char sign ='\\';
	int i; int j;


		if (n <= 0)
			_putchar('\n');
		for (i=0; i<n ; i++)
		{
			for (j=0; j<=n; j++)
		{
		if( j == n)
		{
			_putchar(sign);
		}
	else
		{
		_putchar(' ');
		}
	}

		_putchar('\n');
	}
}
