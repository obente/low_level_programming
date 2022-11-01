#include "main.h"

/**
 * _strpbrk - locates first occurance in the string s,
 * any of byte in accept
 * @s: string checked
 * @accept: sting to be checked for
 * Return: pointer of first occurance or Null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
