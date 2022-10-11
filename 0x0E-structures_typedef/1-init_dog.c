#include "dog.h"

/**
 * init_dog - function updates the info of dog and dog owner
 *@d: a pointer to struct dog contained in the header file
 *it is used to update the values, name, age and owner as
 *passed by the main function
 *@name: dog name as passed in the main function
 *@age: age as passed in the main function
 *@owner: owners name as passed in the main function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

