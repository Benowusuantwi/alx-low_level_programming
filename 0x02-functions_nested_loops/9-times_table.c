#include "main.h"
#include <stdio.h>
/**
 * times_table - a function to print the 9x table
 * Return: none
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
			{
				printf("%d, ", z);
			}
			else
			{
				printf("%2d", z);
				if (y != 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
