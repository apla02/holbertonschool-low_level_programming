#include "holberton.h"
/**
 * main- function to create a file
 * @argc: file
 * @argv: number of letters of the file
 * Return: numbers of letters or zero it fails
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	int read_from;
	int write_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_from = read(fd_from, buffer, 1024);
	write_to = write(STDOUT_FILENO, buffer, read_from);
	if (write_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
