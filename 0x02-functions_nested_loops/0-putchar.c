#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 8)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
