#include "function_pointers.h"

/**
  * print_name - function to print name
  * @name: Pointer to name being printed
  * @f: pointer to function being called
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
