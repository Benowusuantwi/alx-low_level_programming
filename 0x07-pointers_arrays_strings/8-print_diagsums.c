#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input parameter
 * @size: input parameter
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_1;
	int sum_2;
	int i;

	sum_1 = 0;
	sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
