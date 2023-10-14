#include "main.h"
/**
 * more_numbers - a function to print 0-14 10x
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
