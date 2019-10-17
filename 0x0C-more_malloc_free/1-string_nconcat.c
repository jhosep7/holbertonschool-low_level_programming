#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings..
 * @s1:char
 * @s2:char
 * @n: Uint 
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  int i, j, len1, len2;
  int N = n;
  char *Arr;

  if (s1 == NULL)
    {s1 = "" ; }
  if (s2 == NULL)
    {s2 = ""; }

  for (i = 0; *s1 != '\0'; i++)
    {; }
  for (j = 0; *s2 != '\0'; j++)
    {; }

  if (N >= j)
    {
      N = j;
      Arr = malloc(sizeof(char) * (i + j +1));
    }
  else
    {
      Arr = malloc(sizeof(char) * (i + N + 1));
      if (Arr == NULL)
	{return (NULL); }
    }
  for (len1 = 0; len1 < i; len1++)
    {
      Arr[len1] = s1[len1];
    }
  for (len2 = 0; len2 < N; len2++)
    {
      Arr[len1++]=s2[len2];
    }
  Arr[len1++]='\0';
  return (Arr);  
}
