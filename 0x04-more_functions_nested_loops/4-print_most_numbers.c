#include "main.h"
/**
 * print_most_numbers - a function to print lowercase alphabets
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
