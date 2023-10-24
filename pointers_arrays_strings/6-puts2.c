#include "main.h"

/**
 * puts2 - prints every other character
 * str : string
 */

void _puts2(char *str)
{
        while (*str != '\0')
        {
		_putchar(*str);
		str++;
		str++;
        }
        putchar('\n');
}
