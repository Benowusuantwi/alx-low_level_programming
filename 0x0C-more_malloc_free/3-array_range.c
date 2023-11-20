#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: input integer (min value)
 * @max: input integer (max value)
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
