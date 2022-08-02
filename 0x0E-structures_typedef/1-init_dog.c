#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a varible of type struct dog.
 * @d: variable of type struct dog.
 * @name: element of d storing dog's name.
 * @age: element of d storing dog's age.
 * @owner: element of d storing dog owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
