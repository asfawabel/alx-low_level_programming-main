#include <stdio.h>

/**
 * main - Prints all arguments recived, new line per argument.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
