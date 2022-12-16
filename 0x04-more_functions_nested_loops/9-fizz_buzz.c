#include "main.h"
#include <stdio.h>

/**
 * Fizz_Buzz - a program that filters numbers and prints fizz buzz
 *
 * Return: Always 0 (Success)
 */

void fizz_buzz(void)
{
	int a;

	if (a = 1; a <= 100; a++)

	{
		if (a % 3 == 0)
			printf("Fizz ");

		else if (a % 5 == 0)
			printf("Buzz");

		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%d ", a);
	}
	printf('\n');
}
