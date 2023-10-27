#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: input parameter (memory where is stored)
 * @src: input parameter (memory where is copied)
 * *@n: input parameter (number of bytes)
 *
 * Return: string(copied memory with n byted changed)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
