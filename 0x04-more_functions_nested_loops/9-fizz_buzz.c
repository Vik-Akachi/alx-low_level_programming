#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * Fizz_Buzz: a program that filters numbers and prints fizz buzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)

	{
		if (a % 3 == 0)
			printf("Fizz ");

		else if (a % 5 == 0)
			printf("Buzz");

		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%d ", a);

		if (a < 100)
			printf(" ");

	}
	printf(" \n");
	return (0);
}
