#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 *
 * Return: int.
 */
int _strlen_recursion(char *s)
{
  int contador;
  if (*s == '\0')
    {
      return (0);
    }
  else
    {
      contador = 1 + _strlen_recursion(s + 1);
      return (contador);
    }
}
