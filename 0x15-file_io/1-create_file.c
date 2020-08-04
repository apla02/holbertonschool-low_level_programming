#include "holberton.h"
/**
 * create_file - function to create a file
 * @filename: file
 * @text_content: number of letters of the file
 * Return: numbers of letters or zero it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	char *buffer;
	int size = 0;
	int  byt_read;
	int byt_writ;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[size])
	{
		size++;
	}
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (0);
	byt_read = read(fd, buffer, size);
	if (byt_read == -1)
	{
		free(buffer);
		return (-1);
	}
	byt_writ = write(STDOUT_FILENO, buffer, (int)byt_read);
	if (byt_writ == -1)
	{
		free(buffer);
		return (-1);
	}
	close(fd);
	free(buffer);
	return (1);
}
