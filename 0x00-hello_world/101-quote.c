#include <stdio.h>
#include <unistd.h>

/**
 * main - Print quote
 *
 * Description: Dora Korpars 2105 quote
 *
 * Return: Always 1 (SUccess)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
