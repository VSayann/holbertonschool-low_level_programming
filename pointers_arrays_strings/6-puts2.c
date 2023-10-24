#include "main.h"
#include <stdio.h>

/**
 * _puts2 - prints every other character
 * str : string
 *
 */

void _puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0');
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
