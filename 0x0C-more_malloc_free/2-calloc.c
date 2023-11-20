#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: input integer (number of array entries)
 * @size: input integer (memory size of each entry)
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *p;

	i = 0, j = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
