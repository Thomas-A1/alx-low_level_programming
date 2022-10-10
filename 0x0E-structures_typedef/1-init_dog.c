#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialiazes a variable of type struct dog
 * @d: A pointer to the structure
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
