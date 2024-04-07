#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nb_letters;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nb_letters = 0; text_content[nb_letters]; nb_letters++)
			;

		rw = write(fd, text_content, nb_letters);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
