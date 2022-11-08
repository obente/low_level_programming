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

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[i]; i++)
		len++;

	len = len + 1;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[len] = '\0';

	return (s);
}
