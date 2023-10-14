#include "main.h"
/**
 * print_line - a function to print lowercase alphabets
 * @n: input parameter
 */

void print_line(int n)
{
	int l;

	l = n - 1;
	for (n = 0; n <= l; n++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
