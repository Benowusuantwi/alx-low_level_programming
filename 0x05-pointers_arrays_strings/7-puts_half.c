#include "main.h"
/**
 * puts_half - a function to print lowercase alphabets
 * @str: input parameter
 */

void puts_half(char *str)
{
	int a;
	int n;
	int i;

	i = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;

	n = (i / 2);

	if ((i % 2) == 1)
		n = ((i + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
