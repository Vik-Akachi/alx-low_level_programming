#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prime identifier
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if a number is a prime number or not
 * @n: number
 * @a: iterator
 * Return: a 1 0r 0
 */

int check_prime(int n, int a)

}
	if (n <= 1)
		return (0);

	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (check_prime(n, a + 1));
}
