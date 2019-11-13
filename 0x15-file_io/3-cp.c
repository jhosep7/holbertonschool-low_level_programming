#include "holberton.h"
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - check the code for Holberton School students.
 * @argc:int
 * @argv:char
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int FileA, FileB, Reader, Writer;
	char Buffer[1024];

	if (argc != 3)
	{
		dprintf(2,"Usage: cp file_from file_to\n");
		exit(97);
	}
	FileA = open(argv[1], O_RDONLY);
	if (FileA == -1)
	{
		dprintf(2,"Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}
	FileB = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (FileB == -1)
	{
		dprintf(2,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (Reader == 1024)
	{
		Reader = read(FileA, Buffer, 1024);
		if (Reader == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		Writer = write(FileB, Buffer, Reader);
		if (Writer == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(FileA) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", FileA);
		exit(100);
	}
	if (close(FileB) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", FileB);
		exit(100);
	}
	return (0);
}