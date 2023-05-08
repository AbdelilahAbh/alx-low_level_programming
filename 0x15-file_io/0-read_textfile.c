#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of file
 * @letters: number of lettres
 * Return: number of read (seccus), 0 failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen("filename", "r");
	char beff[255];

	if (fp == NULL)
		return (0);

	if (!filename)
		return (0);

	if (fgets(beff, letters, fp) != NULL)
	{
	}

	return (letters);
}
