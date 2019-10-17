#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
if (nmemb == 0 || size ==0)
{
return (NULL);
}
Arr = malloc(nmemb * size);
if (Arr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
Arr[i] = 0;
}
return (Arr);
}
