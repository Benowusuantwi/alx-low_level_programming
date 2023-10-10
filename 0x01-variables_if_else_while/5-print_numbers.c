#include <stdio.h>

/**
 * main - printing the alphbet using putchar only
 * Return:0
 */

int main(void)
{
	int number  = 0;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
