#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it.
 *@filename: constnt char
 *@letters: size_t
 * Return: ssize_t.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, Reader, Output;
	char *Buffer;

	if (filename == NULL)
	{return (0); }
	Buffer = malloc(letters);
	if (Buffer == NULL)
	{return (0); }
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(Buffer);
		return (0);
	}
	Reader = read(fd, Buffer, letters);
	if (Reader == -1)
	{
		free(Buffer);
		return (0);
	}
	Output = write(STDOUT_FILENO, Buffer, Reader);
	if (Output == -1)
	{
		free(Buffer);
		return (0);
	}
	close(fd);
	free(Buffer);
	return (Output);
}
