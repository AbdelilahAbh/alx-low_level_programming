#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file.
 * @filename: the name of file
 * @text_content: text create
 * Return: 1 (seccus), -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int w, i, fb;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fb == -1)
		return (-1);

	w = write(fb, text_content, i);
	if (w == -1)
		return (-1);
	close(fb);

	return (1);
}
