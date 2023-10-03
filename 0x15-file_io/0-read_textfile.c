#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Entry point
 *
 * Description: 'the program's descriptor'
 * @filename: const char* filename
 * @letters: size_t letters
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fh_output;
	ssize_t fh_read;
	ssize_t fh_write;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (filename == 0)
		return (0);

	fh_output = open(filename, O_RDONLY);
	fh_read = read(fh_output, buff, letters);
	fh_write = write(STDOUT_FILENO, buff, fh_read);

	if (fh_output == -1 || fh_read == -1 || fh_write == -1 || fh_write != fh_read)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fh_output);

	return (fh_write);

}
