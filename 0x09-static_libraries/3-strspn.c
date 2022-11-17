#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string passed
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (c);
}
