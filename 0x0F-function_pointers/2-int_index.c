#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @cmp: the pointer to the function to be used to compare values.
 * @array: the array of integers
 *
 * Return: the index of the first element for which cmp doesn't return 0.
 * if not element matches return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
