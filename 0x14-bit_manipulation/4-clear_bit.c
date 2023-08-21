#include "main.h"

/**
 * clear_bit - Set the value of a bit
 * @n: pointer to the bit
 * @index: the index to set the value
 *
 * Return: -1 for error
 * otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= -(1 << index);

	return (1);
}
