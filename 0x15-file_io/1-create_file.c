#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to point to the text
 * @text_content: pointer to string content
 *
 * Return: On success 1, On failure -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (i = 0; text_content[i]; i++)
			;
		length = write(fd, text_content, i);
		if (length == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
