#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @Arr: char
 * Return: Always 0.
 */
char *string_toupper(char *Arr)
{
int i;
for (i = 0; Arr[i]; ++i)
{
if (Arr[i] >= 'a' && Arr[i] <= 'z')
{
Arr[i] = Arr[i] - 32;
}
}
return (Arr);
}
