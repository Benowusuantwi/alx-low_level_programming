#include <stdio.h>

/**
 * main - printing the alphbet using putchar only
 * Return:0
 */

int main(void)
{
	char lowercase = 'a'; /* Starting with a*/

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n'); /* Print a newline character at the end*/
	return (0);
}
