#include <stdio.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Description: This program will assign a random number to the variable n
 *  each time it is executed
 *
 * return: Always 0 (Success)
 */
nt main(void)
	int n:

	srand(time(0))
	n = rand() - RAND_MAX / 2;
{
	if (n == > 0)
		printf("n is positive\n");
	else
	{
		if (n == 0)
			printf("n is zero\n");
	}
	else
	{
		if (n == < 0)
			printf("n is negatve\n");
	}
}
	return (0);
