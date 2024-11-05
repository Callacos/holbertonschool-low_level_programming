#include "main.h"
/**
* _pow_recursion - est une fonction qui mutiplie x
* par lui meme y fois
*
*@x: est le nombre définit dans le main
*@y: est le nombre de fois ou x va se
*multiplier par lui meme
*Return: retourne *_pow_recursion donc le
*résultat de x multiplier par lui meme y fois
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
