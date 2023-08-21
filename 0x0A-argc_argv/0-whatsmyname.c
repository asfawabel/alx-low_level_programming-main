#include <stdio.h>

/**
 * main - Prints the program name, Followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguements.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
