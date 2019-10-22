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

	if (name == NULL)
	{name = ""; }
	if (owner == NULL)
	{owner = ""; }
	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
	{return (NULL); }
	for (i = 0; name[i] != '\0'; i++)
	{; }
	NewDog->name = malloc(i + 1);
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}
	for (j = 0; name[j] != '\0'; j++)
	{; }
	NewDog->owner = malloc(j + 1);
	if (NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{NewDog->name[i] = name[i]; }
	for (j = 0; owner[j] != '\0'; j++)
	{NewDog->owner[j] = owner[j]; }
	NewDog->owner[j] = '\0';
	NewDog->age = age;
	return (NewDog);
}
