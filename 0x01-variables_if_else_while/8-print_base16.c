#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase using putchar
 * Return: 0
 */

int main(void)
{
	int number = 48; /* ASCII value of '0'*/

	while (number <= 57) /* ASCII values for '0' to '9'*/
	{
		putchar(number);
		number++;
	}
	number = 97; /* ASCII value of 'a'*/

	while (number <= 102) /* ASCII values for 'a' to 'f'*/
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
