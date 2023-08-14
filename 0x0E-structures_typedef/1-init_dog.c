#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with variables.
 * @d: the struct dog to be initialized.
 * @name: the name of the dog.
 * @age: Age of the dog.
 * @owner: the owner's name of the dog.
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

