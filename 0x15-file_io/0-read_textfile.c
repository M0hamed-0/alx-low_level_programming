#include "main.h"
/**
 * read_textfile - bla bla
 * @filename: bla bla
 * @letters: bla
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t READ_numbers;
	ssize_t WRITE_numbers;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd != -1)
	{
		buffer = malloc(letters);
		if (!buffer)
			return (0);
		READ_numbers = read(fd, buffer, letters);
		WRITE_numbers = write(STDOUT_FILENO, buffer, READ_numbers);
		close(fd);
		free(buffer);
		return (WRITE_numbers);
	}
	return (0);
}

