#include "main.h"
#include <stdio.h>
/**
 * _puts2 - prints every other character
 * str : string
 *
 */

void _puts2(char *str)
{
        while (*str != '\0')
        {
		putchar(*str);
		str++;
		str++;
        }
        putchar('\n');
}
