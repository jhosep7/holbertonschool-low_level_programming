#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - new dog
 *@name:char
 *@age:char
 *@owner:char
 *
 *Return:dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;
	int i, j;

	if (name == NULL || owner == NULL)
	{return (NULL); }
	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
	{return (NULL); }
	for (i = 0; name[i] != '\0'; i++)
	{; }
	for (j = 0; name[j] != '\0'; j++)
	{; }
	NewDog->name = malloc(sizeof(char) * (i + 1));
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}
	NewDog->age = age;
	NewDog->owner = malloc(sizeof(char) * (j + 1));
	if (NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog);
		return (NULL);
	}
	int k, l;

	for (k = 0; k <= i; k++)
	{NewDog->name[k] = name[k]; }
	for (l = 0; l <= j; l++)
	{NewDog->owner[l] = owner[l]; }
	return (NewDog);
}
