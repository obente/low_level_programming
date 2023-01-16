#include <unistd.h>

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Description - print lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
