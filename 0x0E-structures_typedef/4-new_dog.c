#include <stdlib.h>
#include "dog.h"

/**
 *LenArray - Lenght of any array comming in
 *@origin: Array comming
 *Return: int
 */
int LenArray(char *origin)
{
int i = 0;
while (origin[i] != '\0')
{i++; }
return (i);
}

/**
 *CopyArr - Pass all the info to the new Arr
 *@NewArr:char
 *@OldArr:char
 *Return:char
 */
char *CopyArr(char *NewArr, char *OldArr)
{
int j;
for (j = 0; OldArr[j] != '\0'; j++)
{NewArr[j] = OldArr[j];	}
NewArr[j] = '\0';
return (NewArr);
}

/**
 * new_dog - creates a new dog.
 * @name:char
 * @age:float
 * @owner:char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL || age < 0)
{return (NULL);	}
dog_t *NewDjango;
NewDjango = malloc(sizeof(dog_t));
if (NewDjango == NULL)
{return (NULL); }
NewDjango->name = malloc(sizeof(char) * (LenArray(name) + 1));
if (NewDjango->name == NULL)
{
free(NewDjango);
return (NULL);
}
NewDjango->owner = malloc(sizeof(char) * (LenArray(owner) + 1));
if (NewDjango->owner == NULL)
{
free(NewDjango);
free(NewDjango->name);
return (NULL);
}
NewDjango->name = CopyArr(NewDjango->name, name);
NewDjango->age = age;
NewDjango->owner = CopyArr(NewDjango->owner, owner);
return (NewDjango);
}
