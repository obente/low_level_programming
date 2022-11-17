#include "main.h"

/**
 * _memcpy - fill memory with a constant byte
 * @dest: memory address
 * @src: constant byte
 * @n: size of byte filled
 * Return: address of pointer filled with const byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + 1);
	return (dest);
}
