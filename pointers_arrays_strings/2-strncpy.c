#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: strin g1
 * @src: string 2
 * @n: use at most n bytes from src
 *
 * Return: to the pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destLen, i;

	destLen = strlen(dest);
	for (i = 0; i < destLen; i++)
	{
		if (i > n - 1)
			break;
		else if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
