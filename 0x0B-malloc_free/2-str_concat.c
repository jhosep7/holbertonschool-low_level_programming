#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: char
 * @s2: char
 *
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
size_t str1, str2, str3, i = 0;
char *temp;
int x, y;
for (x = 0; s1[x] != '\0'; x++)
{; }
for (y = 0; s2[y] != '\0'; y++)
{; }
str1 = x;
str2 = y;
str3 = str1 + str2 + 1;
temp = malloc(str3);
while (*s1 != '\0')
{
temp[i] = *s1;
s1++;
i++;
}
while (*s2 != '\0')
{
temp[i] = *s2;
s2++;
i++;
}
temp[i] = '\0';
return (temp);
}
