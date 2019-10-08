#include "holberton.h"
/**
 * _strpbrk - functiont searches a string for any of a set of bytes
 *
 * @s: char
 * @accept:char
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
  int i, j;
  for (i = 0; s[i]; i++)
    {
      for (j = 0; accept[j]; j++)
	{
	  if (accept[j] == s[i])
	    {
	      return (s);
	    }
	}
      s += 2;
    }
  return (0);
}
