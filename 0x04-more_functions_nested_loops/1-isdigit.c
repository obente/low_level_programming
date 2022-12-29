#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: takes an integer parameter
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
