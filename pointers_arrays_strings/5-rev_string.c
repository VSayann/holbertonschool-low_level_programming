#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s : string
 * @str : string
 *
 */
void rev_string(char *s)
{
	int i, j, len;

        i = 0;

        while (s[i] != '\0')
        {
                i++;
        }

        len = i;

        for (j = len - 1; j >= 0; j--)
        {
                putchar(s[j]);
        }

        putchar('\n');
}
{
        while (*str != '\0')
        {
                putchar(*str);
                str++;
        }
        putchar('\n');
}

