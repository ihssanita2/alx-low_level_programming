#include "main.h"
void cp_cmd(int dex1, int ind2, char *str);
/*ihssaneer*/
/**
 * main - copie a file.
 * @argc: the number of passed arguments to the programe.
 * @argv: the array containig the values
 * passed to the programe.
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	/* Variables declaration section :*/
	int f1_index = 0, f2_index = 0;
	/*code section : */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(argv[1], F_OK) == -1 || access(argv[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", argv[1]);
		exit(98);
	}
	f1_index = open(argv[1], O_RDONLY); /* Open 1st file*/
	umask(0000);
	/*Open and or create file 2*/
	f2_index = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (f2_index == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	cp_cmd(f1_index, f2_index, argv[2]); /*Copy from file1 to file2*/
	if (close(f1_index) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", f1_index);
		exit(100);
	}
	if (close(f2_index) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", f2_index);
		exit(100);
	} /* return section : void */
return (0);
}
/*ihssaneer*/
/**
 * cp_cmd - copie a file1 to file2.
 * @ind1: the file descriptor N 1.
 * @ind2: the file descriptor N 2.
 * @str: the name of file2.
 * Return: 1 on success, -1 on failure.
 */
void cp_cmd(int ind1, int ind2, char *str)
{
/*Variables declaration section :*/
	ssize_t w_bites = 0, r_bites = 0;
	char buffer[BUF_1024];
/*code section :*/
	while ((r_bites = read(ind1, buffer, BUF_1024)) > 0)
	{
		w_bites = write(ind2, buffer, r_bites);
		if (w_bites == -1)
		{
			close(ind2);
			close(ind1);
			dprintf(STDERR_FILENO, "Can't write to %s\n", str);
			exit(99);
		}
	}
		if (r_bites == -1)
		{
			close(ind1);
			close(ind2);
			dprintf(STDERR_FILENO, "Can't write to %s\n", str);
			exit(99);
		}
}
