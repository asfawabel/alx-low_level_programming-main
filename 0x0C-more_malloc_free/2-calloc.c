#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory fo an array of a certain number
 * of elements each input byte size.
 * @nmemb: The number of elements.
 * @size: The size of each array element.
 *
 * Returnts: if nmemb = 0 or NULL.
 * otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
