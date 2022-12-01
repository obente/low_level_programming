#include "main.h"

/**
 * binary_to_uint - convert binary to +ve integer
 * @b: binary number
 * Return: +ve integer
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int int1;
	int len, b_2;

	if (!b)
		return (0);

	int1 = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_2 = 1; len >= 0; len--, b_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			int1 += b_2;
	}
	return (int1);
}
