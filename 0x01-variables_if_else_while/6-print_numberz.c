#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 using putchar
 * Return: 0
 */

int main(void)
{
	int number = 48;/*ASCI value of '0'*/

	while (number <= 57)/*ASCI value of '9'*/
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
