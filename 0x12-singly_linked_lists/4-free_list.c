#include "lists.h"
/**
 * free_list - empty the list.
 *@head:main head
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *CurrentNode, *NextNode;

	if (head == NULL)
	{return; }
	CurrentNode = head;
	while (CurrentNode != NULL)
	{
		NextNode = (*CurrentNode).next;
		free((*CurrentNode).str);
		free(CurrentNode);
		CurrentNode = NextNode;
	}
}
