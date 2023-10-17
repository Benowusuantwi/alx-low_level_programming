#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: input parameter(string)
 */

void print_rev(char *s)
{
	int i = 0;
	int r;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (r = i; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
