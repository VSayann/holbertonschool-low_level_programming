#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string of characters
 *
 * Return : always 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}