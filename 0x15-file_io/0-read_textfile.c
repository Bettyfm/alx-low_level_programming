#include "main.h"

/**
 * read_textfile - open file
 * @filename: name of file to open
 * @letters: number of letters
 * Return: number of bytes on success and 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytall;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytall = read(fd, buffer, letters);
	bytall = write(STDOUT_FILENO, buffer, bytall);
	close(fd);
	return (bytall);
}
