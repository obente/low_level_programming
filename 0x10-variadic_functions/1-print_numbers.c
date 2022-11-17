#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_number - prints numbers given
 * @n: int var
 * @separator: seperator str
 * @...: List of nums
 * Return nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num,int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
