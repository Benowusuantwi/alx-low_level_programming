#include <stdio.h>
/**
 * main - task 12
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 99; x++)
	{
		for (y = (x + 1); y < 100; y++)
		{
			putchar('0' + (x / 10));
			putchar('0' + (x % 10));
			putchar(' ');
			putchar('0' + (y / 10));
			putchar('0' + (y % 10));

			if (!(x != 98 && y == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
