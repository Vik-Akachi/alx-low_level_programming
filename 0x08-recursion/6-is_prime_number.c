#include "main.h"

/**
 * check - checks to see if number is prime
 * @a: iteration times
 * @b: given number
 * Return: 1 if  b is a prime number or 0 otherwise
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to be verified
 * Return: 1 if n ios a prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
