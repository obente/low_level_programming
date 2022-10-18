#include "main.h"

/**
 * print_last_digit - just as the mane implies
 *
 * @n : parameter
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int n)
{
	int last_num = n % 10;

	if (n < 0)
		last_num *= -1;

	_putchar(last_num + '0');
	return (last_num);
}
