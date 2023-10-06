#include <stdio.h>
#include <unistd.h>
/**
 * main - a program that prints a text to the standard error
 * Return: 1 (success)
*/
int main(void)
{
	char *string = "and that piece of art is useful\" -\n"
	"		 Dora Korpar, 2015-10-19\n";
	write(2, string, sizeof(string));
	return (1);
}
