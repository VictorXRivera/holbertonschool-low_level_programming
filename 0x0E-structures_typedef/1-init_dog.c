#include "dog.h"

/**
  * init_dog - function to initialize struct
  * @d: struct to initialize
  * @name: name of dog
  * @owner: name of owner
  * @age: age of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
