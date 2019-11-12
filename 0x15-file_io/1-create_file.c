#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: char const.
 * @text_content: char
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int   Input, Output, i = 0;

	if (filename == NULL)
	{return (-1); }
	Input = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (Input == -1)
	{return (-1); }
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	Output =  write(Input, text_content, i);
	if (Output == -1)
	{return (-1); }
	close(Input);
	return (1);
}