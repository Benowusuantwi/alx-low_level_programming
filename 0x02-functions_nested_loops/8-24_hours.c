#include "main.h"
/**
 * jack_bauer - a function to print every minute of the day
 */

void jack_bauer(void)
{
	int h; /*for hours*/
	int m; /*for minutes*/

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10 + '0'); /*print the first digit of the hour*/
			_putchar(h % 10 + '0'); /*print the second digit of the hour*/
			_putchar(':');		 /*print ':'*/
			_putchar(m / 10 + '0'); /*print the first digit of the minute*/
			_putchar(m % 10 + '0'); /*print the second digit of the minute*/
			_putchar('\n');
		}
	}
}
