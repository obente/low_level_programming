#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Description - print letters a - z all in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar(10);
	return (0);
}
