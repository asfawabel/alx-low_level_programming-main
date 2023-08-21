#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: the char to print
 *
 * Return: 1 on success
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
