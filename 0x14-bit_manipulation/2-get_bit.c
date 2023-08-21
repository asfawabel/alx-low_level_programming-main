#include "main.h"

/**
 * get_bit - Gets the value of bit from index
 * @n: the bit
 * @index: the index to get value at
 *
 * Return: -1 on error
 * otherwise - the value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
