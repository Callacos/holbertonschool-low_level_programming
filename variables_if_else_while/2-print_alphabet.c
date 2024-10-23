# include <stdio.h>

/**
*main - Entry alphabet in lowercase
*
*Return: Alwayse 0 (success)
*/

int main(void)

{
	char letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
