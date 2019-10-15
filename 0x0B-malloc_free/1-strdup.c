#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char
 *
 *
 * Return: char.
 */
char *_strdup(char *str)
{
int i, j;
char *duplicateSTR;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
;
}
i++;
duplicateSTR = malloc(i *sizeof(char));
if (duplicateSTR == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
duplicateSTR[j] = str[j];
}
return (duplicateSTR);
}
