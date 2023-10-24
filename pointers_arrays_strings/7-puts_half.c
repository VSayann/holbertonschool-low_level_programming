#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str : string
 *
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int half_length = length / 2;

	if (length % 2 != 0)
	{
		half_length += 1;
	}
		for (i = half_length; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
