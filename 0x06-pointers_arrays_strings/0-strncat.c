#include "main.h"

/**
 * _strncat - concatenate 2 str together
 * @dest: str 1
 * @src: srt 2
 * Return: concatenated str pointer address
 */

char *_strncat(char *dest, char *src)
{
	int len1, len2;
	int i;

	len1 = 0;
	len2 = 0;

	while ( dest[len1] != '\0')
	       len1++;

	while ( src[len2] != '\0')
	       len2++;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return dest;
}
