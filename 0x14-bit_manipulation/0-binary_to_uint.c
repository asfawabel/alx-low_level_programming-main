#include "main.h"
/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: A pointer to str of 0 and 1 chars
 *
 * Return: If b is NULL or char is not 0 or 1 - 0
 * otherwise converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, mult = 1;
	int len;

	if (b == 0)
		return (0);

	for (len = 0; b[len];)
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		i += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (i);
}
