#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str : string
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)

	{
		putchar(str[i]);
	}
	putchar('\n');
}
