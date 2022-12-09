#include <stdio.h>
#include <time.h>

/**
 * main - main function
 *
 * return 0 (Success)
 */
int main(void)
{
	int n;
	srand (time (0));
	n = rand () - RAND_MAX / 2;
	if (n==>0);
		{
		printf ("n is positive\n");
		}
	else (n==0);
		{
		printf ("n is zero\n");
		}
	else (n==<0);
		{
		printf ("n is negative\n");
		}
	return (0);
}

