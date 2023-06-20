#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * This function initializes the members of a dog structure with
 * the provided values. It takes a pointer to the dog structure (`d`)
 * and assigns the given `name`, `age`, and `owner` values to the
 * corresponding members of the structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->age = age;
	d->name = name;
	d->owner = owner;
}

