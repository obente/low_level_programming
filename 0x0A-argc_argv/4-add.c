#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/**
 * main - a program that adds postive intigers
 * @argv: args passed
 * @argc: no of args
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	int sum, i, adder;
	char *n;

	sum = 0;
	adder = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		adder = strtol(argv[i], &n, 10);
		if (*n == '\0')
			sum = sum + adder;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}
