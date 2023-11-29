#include "main.h"

/**
 * read_textfile - a function that reads a text file...
 * and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 *
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd, num_wr;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	
	num_rd = read(fd, buff, letters);
	close(fd);
	if (num_rd == -1)
	{
		free (buff);
		return (0);
	}
	num_wr = write(STDOUT_FILENO, buff, num_rd);
	close(fd);
	free(buff);
	if (num_rd != num_wr)
		return (0);

	return (num_rd);
}
