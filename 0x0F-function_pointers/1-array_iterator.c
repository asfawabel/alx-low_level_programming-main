#include "function_pointers.h"

/**
 * array_iterator - excutes a function given parameter each element of an array
 * @array: The array
 * @size: size of array
 * @action: The pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
