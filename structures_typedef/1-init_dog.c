#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialize a variable
 * @myDog: pointer
 * @name: pointer
 * @owner: pointer
 * 
 * Return: void 
 * 
*/

void init_dog(struct dog *myDog, const char *name, float age, const char *owner)
{
    myDog->name = strdup(name);
    myDog->age = age;
    myDog->owner = strdup(owner);
}

void free_dog(struct dog *myDog)
{
    free(myDog->name);
    free(myDog->owner);
}