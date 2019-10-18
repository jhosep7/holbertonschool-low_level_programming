#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void
 * @old_size: un INT
 * @new_size: un INT
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *Arr;
if (new_size > old_size)
{
Arr = malloc(new_size);
free(ptr);
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
Arr = malloc(new_size);
free(ptr);
return (Arr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
