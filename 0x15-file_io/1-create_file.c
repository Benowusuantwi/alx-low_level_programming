#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: null terminal string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letter;
	int wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (letter = 0; text_content[letter]; letter++)
		;
	wr = write(fd, text_content, letter);

	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
