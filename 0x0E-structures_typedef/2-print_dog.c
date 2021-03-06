#include "dog.h"

/**
  * print_dog - Program to print input
  * @d: pointer to struct dog
  * Return: Printed strings
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
