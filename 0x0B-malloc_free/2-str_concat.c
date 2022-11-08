#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count length of string
 * @s = string to be counted
 * Return: Always length of string
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}

/**
 * str_concat - concat 2 strs
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	unsigned int i, j;
	int total;

	total = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + _strlen(s2);
	n = malloc((total * sizeof(char)) + 1);
	if (n == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		n[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		n[i] = s2[j];
	n[i] = '\0';
	return (n);
}
