#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argiment address in vector array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)

		printf("%s\n", argv[a]);

	return (0);

}
