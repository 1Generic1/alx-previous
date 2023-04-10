#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file to which the text will be appended
 * @text_content: pointer to a string that contains the text to be appended
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	FILE *file = fopen(filename, "a");
	if (file ==  NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t length = strlen(text_content);
		fwrite(text_content, sizeof(char), length, file);
	}
	fclose(file);
	return (1);
}
