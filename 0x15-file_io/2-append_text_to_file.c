#include"main.h"

/**
 *append_text_to_file - The file appends text at the end of a file
 *@filename: This is a pointer to the name of the file.
 *@text_content: The string adds to add to the end of the file.
 *
 *Return: This if the function fails or filename is NULL -1
 *	and if the file does not exist the user lacks write permissions -1
 *	otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, rang = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (rang = 0; text_content[rang];)
			rang++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, rang);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
