#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdsc, wt, klen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (klen = 0; text_content[klen];)
			klen++;
	}

	fdsc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fdsc, text_content, klen);

	if (fdsc == -1 || wt == -1)
		return (-1);

	close(fdsc);

	return (1);
}
