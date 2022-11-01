#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *x = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
			if (!(*--accept))
				break;
			accept = x;
		}
		return (c);
	}
