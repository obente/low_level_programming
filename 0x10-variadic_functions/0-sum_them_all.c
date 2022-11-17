#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums numbers given
 * @n: int var
 * @...: List of nums
 * Return: (0) if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	else
	{
		unsigned int i, sum;

		va_list num;

		va_start(num, n);

		sum = 0;

		for (i = 0; i < n; i++)
		{
			int a = va_arg(num, int);

			sum = sum + a;
		}
		va_end(num);
		return (sum);
	}
}
