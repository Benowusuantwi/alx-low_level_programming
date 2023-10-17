#include "main.h"
/**
 * _puts - a function to print a string, followed by a new line
 * @str: input parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
