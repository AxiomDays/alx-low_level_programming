#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fh_create, fh_write = 0;

	if (filename == 0)
		return -1;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fh_create = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	fh_write = write(fh_create, text_content, len);

	if (fh_create == -1 || fh_write == -1)
		return -1;

	close(fh_create);
	return 1;
}
