#include "main.h"
/**
 * _isdigit - a function to print lowercase alphabets
 * @c: input parameter
 * Return: 0 or 1
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
			{
				_putchar(' ');
			}
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
			if (x == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
