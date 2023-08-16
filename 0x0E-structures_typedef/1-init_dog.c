#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dogs
 * @d: struct dog
 * @name: namesof the dogs
 * @age: age of the dogs
 * @owner: owner of the dogs
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
