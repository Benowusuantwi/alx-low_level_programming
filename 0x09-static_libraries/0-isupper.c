#include "main.h"
/**
 *_isupper - a function to check for uppercase characters
 *@c: input character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
