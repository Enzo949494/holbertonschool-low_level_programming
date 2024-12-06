#include "main.h"

#define BUFFER_SIZE 1024

/**
 * close_file_no_free - Closes a file descriptor without freeing the buffer.
 * @file_descriptor: The file descriptor to close.
 * @returnal: The return value to return.
 *
 * Return: The return value passed in.
 */

int close_file_no_free(int file_descriptor, int returnal)
{
if (close(file_descriptor) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
	exit(100);
}
return (returnal);
}

/**
 * open_file - Opens a file and checks for errors.
 * @filename: The name of the file to open.
 * @flags: The flags for opening the file.
 * @mode: The mode to use if creating the file.
 *
 * Return: The file descriptor on success.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);

if (fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
	exit(98);
}
return (fd);
}

/**
 * copy_content - Copies the content from a source file
 *  descriptor to a destination file descriptor.
 * @fd_from: The source file descriptor from which to read.
 * @fd_to: The destination file descriptor to which to write.
 *
 *
 * Return: None. Exits with a non-zero value on failure.
 */
void copy_content(int fd_from, int fd_to)
{
ssize_t nread;
char buffer[BUFFER_SIZE];

while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	if (write(fd_to, buffer, nread) != nread)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
		close_file_no_free(fd_from, 99);
		close_file_no_free(fd_to, 99);
		exit(99);
	}
}

if (nread == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
	close_file_no_free(fd_from, 98);
	close_file_no_free(fd_to, 98);
	exit(98);
}
}

/**
 * main_copy - Copies the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 * Description: copy a file to a file
 * Return: 0 on success.
 */

int main_copy(int argc, char *argv[])
{
int fd_from;
int fd_to;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

copy_content(fd_from, fd_to);
close_file_no_free(fd_from, 0);
close_file_no_free(fd_to, 0);

return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0 on success.
 */

int main(int argc, char *argv[])
{
return (main_copy(argc, argv));
}
