#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 **new_dog - function saves a copy of owner and dog info
 *@d - a pointer to struct dog contained in the header file
 *it is used to update the values, name, age and owner as
 *passed by the main function
 *@name: dog name as passed in the main function
 *@age: age as passed in the main function
 *@owner: owners name as passed in the main function
 *
 * Return: mem
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);
	mem->name = malloc(sizeof(name));
	mem->name = strdup(name);
	mem->owner = malloc(sizeof(owner));
	mem->owner = strdup(owner);
	mem->age = age;
	return (mem);
}
