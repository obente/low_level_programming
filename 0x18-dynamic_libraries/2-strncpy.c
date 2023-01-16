#include "main.h"

/**
 * _strncpy - copy stuffs
 * @dest: destination
 * @src: str to copy
 * @n: number of letters to reserve
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}

