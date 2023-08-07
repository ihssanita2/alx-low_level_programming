#include "main.h"

/*ihssaneer*/
/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	/* Variables declaration section :*/
	int f_index = 0;
	ssize_t w_bites = 0;
	/*code section : */
	if (filename == NULL)
		return (-1);
	umask(0000);
	f_index = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (f_index == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "\0";
	w_bites = write(f_index, text_content, strlen(text_content));
	if (w_bites == -1)
		return (-1);
	close(f_index);
	/* return section :*/
	return (1);
}
