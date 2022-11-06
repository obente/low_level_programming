#include <stdio.h>

/**
 * main - print name of program
 * @argc: number of command line args
 * @argv: argument passed
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
