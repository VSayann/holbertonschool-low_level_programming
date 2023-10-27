#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: to the pointer
 */
char *_strcat(char *dest, char *src)
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
