#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @Arr: char
 * Return: Always char.
 */
char *rot13(char *Arr)
{
int i, j;
char rot1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot2[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; Arr[i]; i++)
{
for (j = 0; rot1[j]; j++)
{
if (Arr[i] == rot1[j])
{
Arr[i] = rot2[j];
break;
}
}
}
return (Arr);
}
