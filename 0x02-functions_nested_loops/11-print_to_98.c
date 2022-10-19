#include <stdio.h>

/**
 * print_to_98 - prints numbers till 98
 *
 * @n: number to start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", 98);

}
