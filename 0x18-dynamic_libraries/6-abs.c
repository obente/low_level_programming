#include "main.h"

/**
 * _abs - checks and returns absolute values
 *
 * @c : int type
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	return (c);
}
