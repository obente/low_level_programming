#include "main.h"

/**
 * _sqrt_recursion - return sqrt
 * @n: val 1
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
 * _sqrt - sqrt recursion
 * @n: integer param
 * @m: integer param
 * Return: sqrt
 */

int _sqrt(int n, int m)
{
	if (n < 0)
		return (-1);
	if ((m * m) > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
