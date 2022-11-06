#include <stdio.h>

/**
 * main - print name of program
 * @argc: number of command line args
 * @argv: argument passed
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
