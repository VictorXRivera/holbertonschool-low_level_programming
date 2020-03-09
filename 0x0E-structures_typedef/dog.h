#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - data structure
  * @name: pointer to name of dog
  * @owner: pointer to name of owner
  * @age: age of dog
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};

int _putchar(char c);

#endif
