#include "main.h"

int prime_calculator(int n, int i);
/**
 * is_prime_number - a function to detect if n is prime
 * @n: input parameter
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calculator(n, n - 1));
}

/**
 * prime_calculator - a function to determine if n is prime
 * @n: input integer
 * @i: number of iterations
 * Return: 1 if n is a prime number, 0 if not
 */

int prime_calculator(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_calculator(n, i - 1));
}
