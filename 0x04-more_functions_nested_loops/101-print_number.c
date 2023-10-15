#include "main.h"
/**
 * print_number - a function to print lowercase alphabets
 * @n: input parameter
 */

void print_number(int n)
{
	unsigned int dec = n;

	if (n < 0)
	{
		_putchar('-');
		dec = -dec;
	}
	if ((dec / 10) > 0)
		print_number(dec / 10);
	_putchar((dec % 10) + '0');
}
