#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * separated by a space and a comma using putchar
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	for (int i = 1; i < 99; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
