#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_stat(int stat, int fd, char *filename, char mode);
/**
 * main - a function that copies the content of one file to another
 * @argc: The argument count
 * @argv: arguments passed
 *
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int src, dest, num_read = 1024, n_wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_stat(dest, -1, argv[2], 'W');
	while ((num_read == read(src, buffer, sizeof(buffer))) > 0)
	{
		if (num_read == -1)
			check_stat(-1, src, argv[1], 'O');
		n_wrote = write(dest, buffer, num_read);
		if (n_wrote == -1 || n_wrote != num_read)
			check_stat(-1, dest, argv[2], 'W');
	}
	if (num_read == -1)
		check_stat(-1, src, argv[1], 'O');
	close_src = close(src);
	check_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_stat - a function that checks if a file can be opened or closed
 * @stat: file descriptor of file to be opened
 * @filename: name of file
 * @mode: whether closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
}
