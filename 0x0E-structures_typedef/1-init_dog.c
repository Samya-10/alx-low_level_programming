#include "dog.h"

/**
 * init_dog - Give a dog structure.
 * @d: The structure.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner of the dog.
 *
 * Return: Nothing.
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
