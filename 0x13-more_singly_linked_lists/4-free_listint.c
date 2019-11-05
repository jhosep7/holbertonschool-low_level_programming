#include "lists.h"
/**
 * free_listint -free.
 * @head:node
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *FreeAll;

	while (head != NULL)
	{
		FreeAll = head;
		head = (*head).next;
		free(FreeAll);
	}
}
