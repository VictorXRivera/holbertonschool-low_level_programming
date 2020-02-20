#include "holberton.h"

/**
  * _strncat - function to cat two strings
  * @dest: pointer
  * @src: pointer
  * @n: parameter
  * Return: Cat strings
  */
char *_strncat(char *dest, char *src, int n)
{
	int hello;
	int world;

	for (hello = 0; dest[hello] != '\0'; ++hello)
	{}

	for (world = 0; world < n && src[world] != '\0'; ++hello, ++world)
		dest[hello] = src[world];

	dest[hello] = '\0';
	return (dest);
}
