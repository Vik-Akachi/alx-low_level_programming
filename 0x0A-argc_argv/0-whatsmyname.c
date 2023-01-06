#include <stdio.h>
#include <stdlib.h>

/**
 * main - argument function that prints name of address
 *  @argc: argument count
 *  @argv: argiment address in vector array
 *  Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
