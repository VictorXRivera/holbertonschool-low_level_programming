#include "holberton.h"

/**
  * append_text_to_file - function to append text to end of file
  * @filename: name of the file
  * @text_content: content of file
  * Return: number of bytes
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int lengthfinder, referral, totalbytes;

	if (filename == NULL)
		return (-1);

	referral = open(filename, O_APPEND | O_WRONLY);
	if (referral == -1)
		return (-1);

	if (text_content != '\0')
	{
		for (lengthfinder = 0; text_content[lengthfinder] != '\0'; lengthfinder++)
			;
		totalbytes = write(referral, text_content, lengthfinder);
		close(referral);
		if (totalbytes == lengthfinder)
			return (1);

		return (-1);
	}
	close(referral);
	return (1);
}
