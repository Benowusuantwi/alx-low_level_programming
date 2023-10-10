#include <stdio.h>

/**
 * main - printing the alphbet using putchar only
 * this time in reverse order
 * Return:0
 */

int main(void)
{
	char letter = 'z'; /* Starting with a*/

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n'); /* Print a newline character at the end*/
	return (0);
}
