#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
/* Initialize random number generator */
srand(time(0)); /* Seed the random number generator with the current time */
/* Generate a random number between -100 and 100 */
n = (rand() % 201) - 100;

/* Print the generated number */
printf("%d ", n);
/* Determine if n is positive, negative, or zero */
if (n > 0)
{
printf("is positive\n"); /* If n is positive */
}
else if (n == 0)
{
printf("is zero\n"); /* If n is zero */
}
else
{
printf("is negative\n"); /* If n is negative */
}

srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}

