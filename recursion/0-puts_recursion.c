#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string of characters
 *
 * Return : always 0
 */

void _puts_recursion(char *s)
{
	if (!*s)
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
