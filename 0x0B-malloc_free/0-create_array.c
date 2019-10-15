#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: unsigned int
 * @c: char
 *
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *MyArr;
if (size == 0)
{
return (NULL);
}
MyArr = malloc((size) * sizeof(char));
if (MyArr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
MyArr[i] = c;
}
MyArr[i] = '\n';
return (MyArr);
}
