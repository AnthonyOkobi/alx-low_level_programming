#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to dog name variable
* @name: pointer to the name variable
* @age: age of the dog
* @owner: pointer to the name variable of the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

