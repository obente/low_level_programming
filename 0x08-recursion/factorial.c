#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: integer to compute
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
