#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point 
 * @argc: argument count
 * @argv: argiment address in vector array
 * @a: argument presented
 * Return: 0
 */

int main(int argc, char **argv)
{
		int a;

		for (a > 0; a < argc; a++)
		{
			printf("number of arguments is: %d\n", argv[a]);

			return (0);
		}

}
