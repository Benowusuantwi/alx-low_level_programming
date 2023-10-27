#include "main.h"
/**
 * _memset -a function that  fill a block of memory with a constant byte
 * @s: input parameter (starting address of memory to be filled)
 * @b: input parameter (the desired value)
 * @n: number of bytes to be changed
 *
 * Return: string (changed array with new value for n bytes)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--; /*the loops stops after n reaches 1*/
	}
	return (s);
}
