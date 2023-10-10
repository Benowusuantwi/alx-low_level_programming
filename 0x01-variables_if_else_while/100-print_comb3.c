#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * separated by commas and spaces using putchar
 * Return: 0
 */

int main(void)
{
	int tens_digit;
	int ones_digit;

	tens_digit = 0;

	while (tens_digit < 10)
	{
		ones_digit = tens_digit + 1;

		while (ones_digit < 10)
		{
			putchar(tens_digit + '0'); /* Print tens digit*/
			putchar(ones_digit + '0'); /* Print ones digit*/
			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(','); /* Print comma*/
				putchar(' '); /* To print a space*/
			}
			ones_digit++;
		}
		tens_digit++;
	}
	putchar('\n');
	return (0);
}
