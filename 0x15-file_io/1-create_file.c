#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: There is a pointer to the name of the file to create.
 * @text_content: The pointer to a string to write to the file.
 *
 * Return: If the function fails it returns  - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, rang = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (rang = 0; text_content[rang];)
			rang++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, rang);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
