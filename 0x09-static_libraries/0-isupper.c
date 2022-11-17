#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercse characters
 *
 * @c: takes an ASCCI integer value
 *
 * Return: 1 on failure, 0 on success
 */

int _isupper(int c)
{
	if (c < 90 && c > 65)
		return (0);
	else
		return (1);
}
