#include "holberton.h"
/**
 * longitudAr -  concatenates two strings.
 *@Array:char
 *
 * Return: Always a int.
 */
int longitudAr(char *Array)
{
int i;
for (i = 0; Array[i] != '\0'; i++)
{
}
return (i);
}
/**
 * _strcat -  concatenates two strings.
 *@dest:char
 *@src:char
 * Return: Always a int.
 */

char *_strcat(char *dest, char *src)
{
int PastLong;
int j;
PastLong = longitudAr(dest);
for (j = 0; src[j] != '\0'; j++)
{
dest[PastLong + j] = src[j];
}
dest[PastLong + j] = '\0';
return (dest);
}
