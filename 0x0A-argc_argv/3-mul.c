#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: number of command line args
 * @argv: argument passed
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
