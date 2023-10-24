#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i, sSize = 0;
	char temp;

	while (s[sSize] != '\0')
	sSize++;

	for (i = 0; i < sSize / 2; i++)
	{
		temp = s[i];
		s[i] = s[sSize - 1 - i];
		s[sSize - 1 - i] = temp;
	}
}
