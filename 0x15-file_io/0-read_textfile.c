#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of file
 * @letters: number of lettres
 * Return: number of read (seccus), 0 failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *beff;
	ssize_t w, i, fb;

	beff = malloc(sizeof(char) * letters);
	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);

	if (!filename)
		return (0);

	w = read(fb, beff, letters);
	if (w == -1)
	{
		close(fb);
		return (0);
	}

	i = write(STDOUT_FILENO, beff, w);
	if (i == -1)
	{
		close(fb);
		return (0);
	}

	close(fb);
	return (i);
}
