#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: listint_t
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *FreeAll, *Aux;

	if (!head)
	{return; }
	FreeAll = *head;
	while (FreeAll != NULL)
	{
		Aux = FreeAll;
		FreeAll = (*FreeAll).next;
		free(Aux);
	}
	*head = NULL;
}
