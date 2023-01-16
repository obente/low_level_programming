#include "main.h"

/**
 * _strncat - concatenate 2 str together
 * @dest: str 1
 * @src: srt 2
 * @n: number of str to concatenate
 * Return: concatenated str pointer address
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int i;

	len1 = 0;

	while (dest[len1] != '\0')
		len1++;

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
