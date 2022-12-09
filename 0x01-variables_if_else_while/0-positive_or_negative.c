#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program will assign a random number to the variable n
 *  each time it is executed
 *
 * return: Always 0 (Success)
 */

int main(void) /* main -  entry point */
{
	int n:

	srand(time(0))
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
		/* n returns positive when n value is greater than zero */
	else if (n == 0)
		printf("%d is zero\n", n);
		/* n returns to zero when n equals zero */
	else
		printf("%d is negatve\n", n);
		/* n returns negative when n value is less than zero */
	return (0);
}
