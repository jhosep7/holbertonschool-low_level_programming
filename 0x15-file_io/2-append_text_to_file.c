#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:const char.
 * @text_content: char.
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, Reader, Output;

	if (filename == NULL)
	{
		return (-1);
	}
	Reader = open(filename, O_WRONLY | O_APPEND);
	if (Reader == -1)
	{return (-1); }
	if (text_content == NULL)
	{return (1);}
	while (text_content[i] != '\0')
	{
		i++;
	}
	Output = write(Reader, text_content, i);
	if (Output == -1)
	{return (-1); }
	close(Reader);
	return (1);
}