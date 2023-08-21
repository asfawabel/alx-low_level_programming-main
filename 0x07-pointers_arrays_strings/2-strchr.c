#include "main.h"

/**
 * _strchr - Located the character in a string
 * @s: The string to be searched
 *@c: The cahracter to be located
 *
 * Return: If c is fount - a pointer to the first occurence if the character
 * if c is not fount - NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
