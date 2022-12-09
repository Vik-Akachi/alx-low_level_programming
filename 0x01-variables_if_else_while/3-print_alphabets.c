#include <stdio.h>
/**
 * main -hi betty
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int b, c;

	b = 97;
	c = 65;
	while (b < 123)
	{
		putchar(b);
		b++
	}
	while (c < 91)
	{
		putchar(c);
		c++
	}
	putchar(10);
	return (0);
}
