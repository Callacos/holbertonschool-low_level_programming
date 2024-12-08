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
	int fd;
	ssize_t bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	/* Ouvrir le fichier en mode écriture avec troncature */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		return (-1);

	/* Si text_content est NULL, ne rien écrire, mais retourner 1 */
	if (text_content != NULL)
	{
		/* Calculer la longueur de text_content */
		while (text_content[length])
			length++;

		/* Écrire le contenu dans le fichier */
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
