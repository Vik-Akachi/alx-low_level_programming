#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Entry point
 *
 * Return: always returns 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
		printf("last digit of %d is %n and is greater than 5\n", n);
	else if (n == 0)
		printf("last digit of %d is %d and is 0\n", n);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n)
	return (0);
}
