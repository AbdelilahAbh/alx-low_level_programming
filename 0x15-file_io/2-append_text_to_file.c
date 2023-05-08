#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file
 * @text_content: text added
 *
 * Return: failed --1 , other -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
