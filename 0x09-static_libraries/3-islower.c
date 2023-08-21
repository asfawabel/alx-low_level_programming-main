#include "main.h"

/**
 * _islower - check
 * @c: An input character
 * Description: function uses _putchar to print
 * alphabe in lowercase x10
 * Return: 1 if lowercase or 0 for uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
