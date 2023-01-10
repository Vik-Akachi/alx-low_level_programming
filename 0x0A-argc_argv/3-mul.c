#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: address in vector array
 * @argc: count
 * Return: 0
 */

int main(int argc, char **argv)
{

	int mult, a, b;

	{
		if (argc != 3)
			printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;
	{
		printf("%d\n", mult);
	}

	return (0);
}
