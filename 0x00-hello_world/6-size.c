#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Description: prints the size of varous types on the computer it is compiled
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long iint));
	printf("size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
