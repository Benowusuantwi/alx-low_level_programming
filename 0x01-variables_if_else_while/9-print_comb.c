#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * separated by commas and spaces using putchar
 * Return: 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0'); /* Convert digit to character and print*/

		if (digit < 9)
		{
			putchar(','); /* Print comma*/
			putchar(' '); /* Print space*/
		}
		digit++;
	}
	putchar('\n'); /* Print newline*/
	return (0);
}
