#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == str1[j])
			{
				n[i] = str2[j];
			}
		}
	}
	return (n);
}
