#include "main.h"
/**
 * print_line - a function to print lowercase alphabets
 * @n: input parameter
 */

void print_line(int n)
{
	int l;

	l = n;
	if (n > 0)
	{
		for (n = 0; n < l; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
