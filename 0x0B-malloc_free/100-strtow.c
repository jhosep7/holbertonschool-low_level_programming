#include "holberton.h"
#include <stdlib.h>
/**
 * words - shows chunck
 * @str: array
 *
 *Return: int
 */
int words(char *str)
{
int x, Twords = 0;
for (x = 0; str[x] != '\0'; x++)
{
if (*str == ' ')
{
str++;
}
else
{
while (*str != ' ' && *str != '\0')
{
str++;
Twords++;
x++;
}
}
}
return (Twords);
}

/**
 * strtow - shows chuncksplits string
 * @str: array
 *
 *Return: char
 */
char **strtow(char *str)
{
int TotalW = 0, i = 0, j = 0, lenMalloc = 0;
char **TWords, *GottenWord;
if (str == 0 || *str == 0)
{return (NULL); }
TotalW = words(str);
if (TotalW == 0)
{return (NULL); }
TWords = malloc((TotalW + 1) * sizeof(char *));
if (TWords == 0)
{return (NULL); }
while (*str != '\0' && i < TotalW)
{
if (*str == ' ')
{str++; }
else
{
GottenWord = str;
while (*str != ' ' && *str != '\0')
{
lenMalloc++;
str++;
}
TWords[i] = malloc((lenMalloc + 1) * sizeof(char));
if (TWords[i] == 0)
{
while (i > 0)
free(TWords[--i]); }
free(TWords);
return (NULL); }
while (*GottenWord != ' ' && *GottenWord != '\0')
{
TWords[i][j] = *GottenWord;
GottenWord++;
j++; }
TWords[i][j] = '\0';
i++;
j = 0;
lenMalloc = 0;
str++; }
}
return (TWords); }
