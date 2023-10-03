#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fh_open, fh_write;

	if (filename == 0)
		return -1;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fh_open = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
		fh_write = write(fh_open, text_content, len);
	
	close(fh_open);

	if (fh_open == -1 || fh_write == -1)
		return -1;
	return 1;
}
