#include "holberton.h"

/**
  * create_file - function to create a file
  * @filename: name of the file
  * @text_content: content of the file
  * Return: 1 on success
  */
int create_file(const char *filename, char *text_content)
{
	int opener;
	int fd;
	int iterator;

	if (filename == NULL)
		return (-1);

	opener = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (opener == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (iterator = 0; text_content[iterator] != '\0'; iterator++)
		;
	fd = write(opener, text_content, iterator);
	close(opener);
	if (fd == -1)
		return (-1);

	return (1);
}
