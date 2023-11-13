#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include "main.h"

void init_dog(struct dog *myDog, const char *name, float age, const char *owner)
{
    myDog->name = strdup(name);
    myDog->age = age;
    myDog->owner = strdup(owner);
}

void free_dog(struct dog *myDog) {
    free(myDog->name);
    free(myDog->owner);
}
