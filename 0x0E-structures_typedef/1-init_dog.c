#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - This program initializes a variable of type struct dog
 * @d: The dog to be initialized in the program
 * @name: The name to be initialized in the program
 * @age: The age to be initialized in the program
 * @owner: The owner to be initialized in the program
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
