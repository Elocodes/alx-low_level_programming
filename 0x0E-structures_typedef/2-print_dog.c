#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function prints the info of dog and dog owner
 *@d: a pointer to struct dog contained in the header file
 *it points to the values; name, age and owner to be printed as
 *passed by the main function
 *@name - dog name as passed in the main function
 *@age - age as passed in the main function
 *@owner - owners name as passed in the main function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
