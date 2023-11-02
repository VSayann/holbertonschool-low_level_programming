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
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
