#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written into file
 * Return: 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rw;

	if (!filename)
		return (-1);
	fd = open(filename, o_CREAT | o_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
