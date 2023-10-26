#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest : string 1
 * @src : string 2
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen, j = 0;

	destLen = strlen(dest);
	while (src[j])
	{
		dest[destLen + j] = src[j];
		j++;
	}
	dest[destLen + j] = '\0';

	return (dest);
}
