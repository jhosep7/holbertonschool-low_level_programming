#include "lists.h"
/**
 * add_node - check the code for Holberton School students.
 * @head:pointerx2
 * @str: string
 * Return: list:t.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *MyArr;
	list_t *NewNode;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
	{return (NULL); }
	MyArr = strdup(str);
	if (MyArr == NULL)
	{
		free(NewNode);
		return (NULL);
	}
	while (str)
	{len++; }
	(*NewNode).str = MyArr;
	(*NewNode).len = len;
	(*NewNode).next = *head;
	*head = NewNode;
	return (NewNode);
}
