#include "main.h"

/**
 * _strchr - locates an occurance of a character
 * @s: string passed
 * @c: character to locate
 * Return: pointer to 1st occurance
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
