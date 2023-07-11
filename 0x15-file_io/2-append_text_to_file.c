#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - func to add data to file
 * @filename: name of file to add data to
 * @text_content: str to be added
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytw = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytw] != '\0')
			bytw++;

		if (write(fd, text_content, bytw) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
