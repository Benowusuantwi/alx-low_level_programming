#include "main.h"
/**
 * _isdigit - a function to test for digit (0- 9)
 * @c: input parameter
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
