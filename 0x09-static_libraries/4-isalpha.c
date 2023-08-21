#include "main.h"

/**
 * _isalpha - Check
 * @c: An input character
 * Description: function returns 1 if hte cahracter is a
 * letter, lowercase/uppercase.
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
