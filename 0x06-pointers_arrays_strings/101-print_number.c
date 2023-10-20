#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: Input parameter (integer)
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num_1;

	num_1 = n;

	if (n < 0)
	{
		_putchar('-');
		num_1 = -n;
	}

	if (num_1 / 10 != 0)
	{
		print_number(num_1 / 10);
	}
	_putchar((num_1 % 10) + '0');
}
