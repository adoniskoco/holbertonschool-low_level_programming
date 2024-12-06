#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * closefd - closes file descriptors
 * @fd1: first file
 * @fd2: second file
 */
void closefd(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}

/**
 * open_files - opens the files for reading and writing
 * @src: source file name
 * @dest: destination file name
 * @fdr: file descriptor for source
 * @fdw: file descriptor for destination
 * Return: 0 on success, exits on error
 */
int open_files(char *src, char *dest, int *fdr, int *fdw)
{
	*fdr = open(src, O_RDONLY);
	if (*fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	*fdw = open(dest, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (*fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	return (0);
}

/**
 * copy_file - copies the content of the source file to the destination file
 * @fdr: file descriptor for the source file
 * @fdw: file descriptor for the destination file
 * Return: 0 on success, exits on error
 */
int copy_file(int fdr, int fdw)
{
	char buffer[1024 * 8];
	int n, m;

	while ((n = read(fdr, buffer, sizeof(buffer))) > 0)
	{
		m = write(fdw, buffer, n);
		if (m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			exit(99);
		}
	}

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		exit(98);
	}

	return (0);
}

/**
 * main - Entry point for copying a file
 * @argc: number of arguments supplied to argv
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fdr, fdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	open_files(argv[1], argv[2], &fdr, &fdw);


	copy_file(fdr, fdw);


	closefd(fdr, fdw);

	return (0);
}
