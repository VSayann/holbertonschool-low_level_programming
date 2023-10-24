#include "main.h"
#include <stdio.h>

/**
 * _puts2 - prints every other character
 * str : string
 *
 */

void _puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i += 2) 
	{
	putchar(str[i]);
}
	putchar('\n');
}
