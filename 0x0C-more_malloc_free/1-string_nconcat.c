#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat
 * Return: Concated str
 */

char *string_nconcat(char *s1, char *s2, n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s11 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (n > size2)
		n = size2;

	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	for (; i < size1 + n; i++)
		p[i] = s2[i - size1];
	p[i] = '\0';

	return (p);
}

