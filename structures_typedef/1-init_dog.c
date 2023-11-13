#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* init_dog - initialize a variable
* @myDog: pointer
* @owner: pointer
* @name: pointer
* @age: pointer
* Return: void
*
*/

void init_dog(struct dog *myDog, const char *name, float age, const char *owner)
{
    if (myDog == NULL)
        myDog = malloc(sizeof(strcut dog))
    myDog->name = strdup(name);
    myDog->age = age;
    myDog->owner = strdup(owner);
}

    void free_dog(struct dog *myDog)
{
    free(myDog->name);
    free(myDog->owner);
}