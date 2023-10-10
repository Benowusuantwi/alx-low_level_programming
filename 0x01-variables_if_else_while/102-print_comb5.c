#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * from 00 to 99 separated by commas and spaces using putchar
 * Return: 0
 */

int main(void)
{
	int tens_digit;
	int ones_digit;

	tens_digit = 0;

	while (tens_digit < 10)
	{
		ones_digit = 0;
		while (ones_digit < 10)
		{
			putchar((tens_digit / 10) + '0'); /* Print tens digit (leading zero)*/
			putchar((tens_digit % 10) + '0'); /* Print tens digit*/
			putchar(' '); /* Print space*/
			putchar((ones_digit / 10) + '0'); /* Print ones digit (leading zero)*/
			putchar((ones_digit % 10) + '0'); /* Print ones digit*/

			if (tens_digit != 9 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			ones_digit++;
		}
		tens_digit++;
	}
	putchar('\n');
	return (0);
}
