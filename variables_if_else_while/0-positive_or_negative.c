#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point of the program
 * This program generates a random number.
 */
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

return (0);
}

