#ifndef DOG_H
#define DOG_H

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *myDog, const char *name, float age, const char *owner);
#endif
