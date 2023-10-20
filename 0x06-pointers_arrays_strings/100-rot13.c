#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: input (pointer to string parameters)
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/*the data to be rotated/ encrypted*/
	char data_rotation[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/* the encryption */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data_input[j])
			{
				s[i] = data_rotation[j];
				break;
			}
		}
	}
	return (s);
}
