#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: input string
 * @needle: input string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
