#include <stdlib.h>
#include "dog.h"

/**
 *	init_dog - initialize a variable of type struct dog.
 *	@d: struct dog
 *	@name: dog's name
 *	@owner: dog's owner
 *	@age: dog's age
 *
 *	Return: void
*/

void init_dog(struct dog *d, char *name, char *owner, float age)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
