#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input string/ pointer
 * Return: integer (the length of *s)
 */

int _strlen_recursion(char *s)
{
	int len_int = 0;

	if (*s)
	{
		len_int++;
		len_int += _strlen_recursion(s + 1);
	}
	return (len_int);
}
