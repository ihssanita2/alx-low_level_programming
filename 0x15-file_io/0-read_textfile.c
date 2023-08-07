#include "main.h"

/* ihssaneer*/
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 * Return: actual number.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Variables declaration section :*/
	int f_index = 0;
	ssize_t r_bites = 0, w_bites = 0;
	char *buffer;
	/*code section : */
	if (filename == NULL)
		return (0);
	f_index = open(filename, O_RDWR);
	if (f_index == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	r_bites = read(f_index, buffer, letters);
	if (r_bites == -1)
	{
		free(buffer); /*a clarifier*/
		close(f_index);
		return (0);
	}
	w_bites = write(STDOUT_FILENO, buffer, r_bites);
	if ((w_bites == -1) | (w_bites < r_bites))
	{
		free(buffer);
		close(f_index);
		return (0);
	}
	close(f_index);
	/* return section :*/
	return (r_bites);
}
