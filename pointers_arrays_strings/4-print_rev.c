#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @str : string
 */

void print_rev(char *s)
	int length = strlen(str);
	for (int i = length - 1; i >= 0; i--) {
		putchar(str[i]);
	}
	putchar('\n');
}
