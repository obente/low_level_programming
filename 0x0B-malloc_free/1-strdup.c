#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create mem space
 * @str: string to accept
 * Return: pointer to created space
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	len = 0;
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[len] = '\0';

	return (s);
}
