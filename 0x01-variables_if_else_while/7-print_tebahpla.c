#include <stdio.h>
/**
 * main - print alphabet in lowercase in reverse
 *
 * Description - print letters z -a all in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(10);
	return (0);
}
