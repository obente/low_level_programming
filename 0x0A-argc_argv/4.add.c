#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: number of command line args
 * @argv: argument passed
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{

	int i, sum, x;
	x,sum = 0;
	printf("%d\n",argc);

	for (i = 1; i < argc; i++)
	{
//		if (isdigit(atoi(argv[i])))
			{
				x = atoi(argv[i]);
				sum += x;
			}
	}
	printf("%d\n",sum);
	return (0);
}

