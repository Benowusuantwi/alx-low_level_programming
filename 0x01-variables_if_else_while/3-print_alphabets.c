#include <stdio.h>

/**
 * main - printing the alphbet using putchar only
 * Return:0
 */

int main(void)
{
	char lowercase = 'a'; /* Starting with a*/
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n'); /* Print a newline character at the end*/
	return (0);
}
