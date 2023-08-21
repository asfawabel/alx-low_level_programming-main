#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The charcacter to print
 *
 * Return: 1 (Success)
 * on error, -1 is retuened
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
