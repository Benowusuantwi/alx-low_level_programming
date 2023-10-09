#include <stdio.h>

/**
 * main - printing the alphbet using putchar only
 * Return:0
 */

int main(void)
{
	char letter = 'a'; /* Starting with a*/

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n'); /* Print a newline character at the end*/
	return (0);
}
