#include "main.h"
/**
 * print_last_digit - a function to print lowercase alphabets
 * @numb: input parameter
 * Return: d
 */

int print_last_digit(int numb)
{
	int d;

	d = numb % 10;

	if (numb < 0)
	{
		d = -d;
	}
	_putchar(d + '0');
	return (d);
}
