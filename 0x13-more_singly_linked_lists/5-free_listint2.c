#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: listint_t
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *FreeAll;

	if (*head != NULL || head != NULL)
	{return; }
	while (*head != NULL)
	{
		FreeAll = *head;
		*head = (**head).next;
		free(FreeAll);
	}
	*head = NULL;
}
