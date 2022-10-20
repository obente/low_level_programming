#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 *
 * Returns: NOTHING.. lol
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
