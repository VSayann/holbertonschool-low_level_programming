#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * 
 * Return: void
 * 
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Dog Information:\n");

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

printf("Age: %.1f years\n", d->age);

printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}