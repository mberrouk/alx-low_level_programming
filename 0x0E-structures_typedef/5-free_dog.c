#include "dog.h"

/**
  * free_dog - free dog_t containt
  * @d: struct
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
