#include <stdio.h>

/**
 * main - i'am really getting into it
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			purchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}
