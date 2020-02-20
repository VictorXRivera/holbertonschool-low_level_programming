#include "holberton.h"

/**
  * _strcat - function to cat two strings
  * @dest: pointer parameter
  * @src: pointer parameter
  * Return: Success
  */
char *_strcat(char *dest, char *src)
{
	int hello;
	int world;

	for (hello = 0; dest[hello] != '\0'; ++hello)
	{}

	for (world = 0; src[world] != '\0'; ++hello, ++world)
		dest[hello] = src[world];

	dest[hello] = '\0';
	return (dest);
}
