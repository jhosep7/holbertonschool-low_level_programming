#include "holberton.h"
#include <stdlib.h>
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
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
Arr = malloc(new_size);
if (Arr == NULL)
{
return (NULL);
}
return (Arr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
Arr = malloc(new_size);
if (Arr == NULL)
{
return (NULL);
}
if (old_size < new_size)
{old_size = old_size; }
else
{old_size = new_size; }
for (i = 0; i < old_size && i < new_size; i++)
{
Arr[i] = ((char *)ptr)[i];
}
free(ptr);
return (ptr);
}
