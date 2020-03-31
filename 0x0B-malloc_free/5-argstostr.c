#include "holberton.h"

/**
  * argstostr - function to concat all args it receives
  * @ac: args count
  * @av: vector
  * Return: char pointer
  */
char *argstostr(int ac, char **av)
{
	int iterator, counter, index;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (iterator = 0, counter = 0; counter < ac; counter++)
		for (index = 0; av[counter][index] != '\0'; index++)
			iterator++;

	string = malloc(iterator + ac + 1);
	if (string == NULL)
		return (NULL);

	for (counter = 0, iterator = 0; counter < ac; counter++)
	{
		for (index = 0; av[counter][index] != '\0'; index++)
		{
			string[iterator] = av[counter][index];
			iterator++;
		}
		string[iterator] = '\n';
		iterator++;
	}
	string[iterator] = '\0';
	return (string);
}
