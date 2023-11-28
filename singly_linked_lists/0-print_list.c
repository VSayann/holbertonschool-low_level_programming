#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 */

size_t print_list(const list_t *h)
{

	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		
		else
			printf("[%u] %s\n, h->len, h->str");
		
		h = h->next;
		s++;

	}
	
	return (s);
	
} 
