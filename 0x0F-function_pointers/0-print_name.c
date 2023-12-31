#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - afunction that prints names using pointer to function
* @name: input string to add
* @f: input pointer to function
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
