#include <stdio.h>
#include <unistd.h>

/**
 * main - Print quote
 *
 * Description: Prints Dora's quote
 *
 * Return: Always1 (Success)
 */
int main(void)
{
	write(2, "and that piece od art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
