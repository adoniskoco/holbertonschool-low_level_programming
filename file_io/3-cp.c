#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * closefd - closes file descriptors
 * @fd1: first file descriptor
 * @fd2: second file descriptor
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
 * @fdr: pointer to file descriptor for source
 * @fdw: pointer to file descriptor for destination
 */
void open_files(char *src, char *dest, int *fdr, int *fdw)
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
}

/**
 * copy_file - copies content from source to destination file
 * @fdr: file descriptor for source file
 * @fdw: file descriptor for destination file
 */
void copy_file(int fdr, int fdw)
{
	char buffer[1024 * 8];
	ssize_t n, m;

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
}

/**
 * main - Entry point for copying a file
 * @argc: number of arguments
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
