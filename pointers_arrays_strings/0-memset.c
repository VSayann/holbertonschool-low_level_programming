#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area pointed to
 * @b: constant byte
 * @n: first byte
 *
 * Return: the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}
