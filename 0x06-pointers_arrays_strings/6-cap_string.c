#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string..
 *
 * Return: Always 0.
 */

char *cap_string(char *Arr)
{
char SpChar[13] = {'\t', '\n', '(', ')', '{', '}', ' ', ',', ';', '.', '!', '?',};
int i, j;
for (i = 0; Arr[i]; i++)
{
for (j = 0; SpChar[j]; j++)
{
if (Arr[i] == SpChar[j])
{
if (Arr[i + 1] >= 'a' && Arr[i + 1] <= 'z')
{
Arr[i + 1] = Arr[i + 1] - 32;
}
}
if (i == 0)
{
if (Arr[i] >= 'a' && Arr[i] <= 'z')
{
Arr[i] = Arr[i] - 32;
}
}
}
}
return (Arr);
}
