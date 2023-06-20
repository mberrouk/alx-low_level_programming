#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the dog structure to print
 *
 * This function takes a pointer to a dog structure (`d`)
 * and prints the details of the dog, including its name
 * age, and owner. If any of the members of the dog structure
 * are NULL, the function will print "NULL" for that member.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
