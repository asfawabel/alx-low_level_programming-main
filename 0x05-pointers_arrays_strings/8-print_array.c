#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integres
 * followed by a new line.
 * @a: Input array
 * @n: Input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
