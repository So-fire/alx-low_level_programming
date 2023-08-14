#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 * @d: pointer
 * @name: dog name
 * @age: dog age.
 * @owner: dog owner
 *
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
