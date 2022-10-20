#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, sum;

	a = 0;
	b = 0;
	sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			a += i;
		} else if ((i % 5) == 0)
		{
			b += i;
		}
	}
	sum = a + b;
	printf("%d\n", sum);
	return (0);
}
