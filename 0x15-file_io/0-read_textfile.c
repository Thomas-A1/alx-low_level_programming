#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters in it.
 * @filename: filename
 * @letters: number of letters printed
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nrd = read(fd, buf, letters);
	close(fd);
	if (nrd == -1)
	{
		free(buf);
		return (0);
	}
	nwr = write(STDOUT_FILENO, buf, nrd);
	free(buf);
	if (nrd != nwr)
		return (0);
	return (nwr);
}
