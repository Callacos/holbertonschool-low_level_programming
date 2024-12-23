#include "main.h"

/**
 * create_file - Creates a file with a specific content.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written in the file.
 *
 * Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		write(fd, text_content, i);
	}

	close(fd);

	return (1);
}
