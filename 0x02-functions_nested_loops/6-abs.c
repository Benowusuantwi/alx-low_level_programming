#include "main.h"
/**
 * _abs - a function to print absolute value
 * @var_1: input variable / parameter for the function _abs
 * Return: var_1 or -var_1
 */

int _abs(int var_1)
{
	if (var_1 < 0)
	{
		return (-var_1);
	}
	else
	{
		return (var_1);
	}
	return (0);
}
