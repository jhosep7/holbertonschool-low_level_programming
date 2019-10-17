#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:un Int
 * @size: un Int
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *Arr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
Arr = malloc(nmemb * size);
if (Arr == NULL)
{
return (NULL);
}
i = 0;
while (i < nmemb * size)
{
Arr[i] = 0;
i++;
}
return (Arr);
}
