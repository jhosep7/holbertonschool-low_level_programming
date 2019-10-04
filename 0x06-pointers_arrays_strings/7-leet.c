#include "holberton.h"

/**
 * leet - check the code for Holberton School students.
 * @Arr: char
 * Return: Always char.
 */

char *leet(char *Arr)
{
int i, j;
char aeotl[] = "aeotl";
char AEOTL[] = "AEOTL";
char Num43071[] = "43071";
for (i = 0; Arr[i]; i++)
{
for (j = 0; aeotl[j] && AEOTL[j]; j++)
{
if (Arr[i] == aeotl[j] || Arr[i] == AEOTL[j])
{
Arr[i] = Num43071[j];
}
}
}
return (Arr);
}
