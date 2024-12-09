#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * error_exit - Affiche un message d'erreur et quitte le programme
 * @code: Le code de sortie à utiliser
 * @format: La chaîne de format pour le message d'erreur
 * @arg: L'argument à insérer dans la chaîne de format
 *
 * Description: Cette fonction affiche un message d'erreur formaté
 * sur la sortie d'erreur standard, puis termine le programme
 * avec le code de sortie spécifié.
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * close_file - Ferme un descripteur de fichier
 * @fd: Le descripteur de fichier à fermer
 *
 * Description: Cette fonction tente de fermer le descripteur de fichier
 * donné. Si la fermeture échoue, elle appelle error_exit pour afficher
 * un message d'erreur et quitter le programme.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", (char *)&fd);
}

/**
 * main - Copie le contenu d'un fichier vers un autre fichier
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes contenant les arguments du programme
 *
 * Return: 0 en cas de succès, divers codes d'erreur en cas d'échec
 *
 * Description: Ce programme copie le contenu d'un fichier source vers un
 * fichier de destination. Il vérifie le nombre correct d'arguments, ouvre
 * les fichiers source et destination, lit le contenu du fichier source
 * par blocs et l'écrit dans le fichier de destination. Gère les erreurs
 * d'ouverture, de lecture, d'écriture et de fermeture des fichiers.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (fd_to == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
