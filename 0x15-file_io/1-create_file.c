#include "main.h"

/**
 * create_file - This program creates a file
 * @filename: The pointer to the name of the file to create in the program
 * @text_content: The pointer to a string to write to the file
 * Return: if there is failure -1, otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
