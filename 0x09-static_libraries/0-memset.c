#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory address
 * @b: constant byte
 * @n: size of byte filled
 * Return: address of pointer filled with const byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
