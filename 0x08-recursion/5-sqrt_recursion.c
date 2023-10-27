#include "main.h"

int sqrt_calculator(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: input parameter
 * Return: result of sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_calculator(n, 0));
}

/**
 * sqrt_calculator - a function that calculates the \n
 * natural sqrt of n
 * @n: input integer
 * @i: number of iterations
 * Return: result of the sqrt of n
 */

int sqrt_calculator(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_calculator(n, i + 1));
}
