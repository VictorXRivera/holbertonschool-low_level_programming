#include "dog.h"
char *_strdup(char *str);

/**
  * new_dog - pointer to struct
  * @name: pointer to name of dog
  * @owner: pointer to name of owner
  * @age: age of dog
  * Return: Created new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *namecopy;
	char *ownercopy;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	namecopy = _strdup(name);
	ownercopy = _strdup(owner);

	if (!namecopy || !ownercopy)
	{
		free(doggie);
		free(namecopy);
		free(ownercopy);
		return (NULL);
	}
	doggie->name = namecopy;
	doggie->owner = ownercopy;
	doggie->age = age;

	return (doggie);
}
/**
  * _strdup - function to duplicate string from pointer
  * @str: Pointer to string being passed into program
  * Return: Duplicated string
  */
char *_strdup(char *str)
{
	int original_size = 0;
	char *duplicate_str;
	char *dup_offset;

	if (str == NULL)
		return (NULL);

	while (str[original_size] != '\0')
		original_size++;
	original_size++;

	duplicate_str = (char *)malloc(sizeof(char) * original_size);
	if (duplicate_str == NULL)
		return (NULL);

	dup_offset = duplicate_str;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';
	return (duplicate_str);
}
