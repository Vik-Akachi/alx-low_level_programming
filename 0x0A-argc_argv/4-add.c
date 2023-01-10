#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds natural numbers
 * @argc: argument count
 * @argv: argument strings
 *
 * Return: 0
 */

int main(int argc, int **argv)
{
	int result = 0, num, a, b, c;

	for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		result += num;
		{
			printf("%d\n", result);
			return (0);
		}
	}

}
