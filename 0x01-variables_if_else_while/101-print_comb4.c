#include <stdio.h>

/**
 * main - prints all possible combinations of three-digit numbers
 * separated by commas and spaces using putchar
 * Return: 0
 */

int main(void)
{
	int hundreds_digit;
	int tens_digit;
	int ones_digit;

	hundreds_digit = 0;

	while (hundreds_digit < 10)
	{
		tens_digit = hundreds_digit + 1;
		while (tens_digit < 10)
		{
			ones_digit = tens_digit + 1;

			while (ones_digit < 10)
			{
				putchar(hundreds_digit + '0'); /* Print hundreds digit*/
				putchar(tens_digit + '0');     /* Print tens digit*/
				putchar(ones_digit + '0');     /* Print ones digit*/

				if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
				ones_digit++;
			}
			tens_digit++;
		}
		hundreds_digit++;
	}
	putchar('\n');
	return (0);
}
