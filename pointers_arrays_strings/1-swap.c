#include "main.h"

/**
 * swap_int - swap to int to 42
 * @a : number
 * @b : number
 * 
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
