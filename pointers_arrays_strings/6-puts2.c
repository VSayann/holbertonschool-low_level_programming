#include "main.h"

/**
 * puts2 - prints every other character
 * str : string
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                putchar(*str);
                str++;
		str++;
        }
        putchar('\n');
}
