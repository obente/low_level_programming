#include <stdio.h>
/**
 * main - 6. Numberz
 *
 * Description - print all single digit numbers of base 10
 * starting from 0 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
