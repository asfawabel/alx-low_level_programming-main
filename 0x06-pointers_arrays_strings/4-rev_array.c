#include "main.h"
/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to string
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int c;
	int j = n - 1;
	int tmp;

	for (c = 0; c < n / 2; c++, j--)
	{
		tmp = a[c];
		a[c] = a[j];
		a[j] = tmp;
	}
}
