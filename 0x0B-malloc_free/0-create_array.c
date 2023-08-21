#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initializes it with specific char
 * @size: The size of the array to be initialized.
 * @c: The specific char to initialize.
 *
 * Return: If size == 0 or the function fails - NULL.
 * otherwise - apointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
