#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends or writes text to the end of a file.
 * @filename: The name of the file to be appended or written to.
 * @text_content: The content to be appended or written in the file.
 *
 * Return: If the function fails - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written;
size_t length = 0;

if (!filename)
	return (-1);

/* Ouvrir le fichier en mode append */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);

if (text_content)
{
	while (text_content[length])
		length++;

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
}

close(fd);
return (1);
}