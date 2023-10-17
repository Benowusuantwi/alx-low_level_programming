#include "main.h"
/**
 * swap_int - a function to swap the value of two integers
 * @a: input parameter
 * @b: input parameter
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
