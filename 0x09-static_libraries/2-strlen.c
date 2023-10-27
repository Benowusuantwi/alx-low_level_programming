#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: input parameter(string length)
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
