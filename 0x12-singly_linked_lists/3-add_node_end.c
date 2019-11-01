#include "lists.h"

/**
 *StringLen - string lenght
 *@String:string comming str
 *Return: int
 */
int StringLen(const char *String)
{
	int x;

	for (x = 0; String[x] != '\0'; x++)
	{; }
	return (x);
}

/**
 * add_node_end -adds a node at the end .
 * @head: head node
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode, *MyArr;

	NewNode = malloc(sizeof(list_t));
	MyArr = *head;

	if (NewNode == NULL || head == NULL)
	{return (NULL); }
	if (str != NULL)
	{
		(*NewNode).str = strdup(str);
		if ((*NewNode).str == NULL)
		{
			free(NewNode);
			return (NULL);
		}
		(*NewNode).len = StringLen((*NewNode).str);
	}
	if (MyArr)
	{
		while ((*MyArr).next)
		{MyArr = (*MyArr).next; }
		(*MyArr).next = NewNode;
	}
	else
	{*head = NewNode; }
	return (NewNode);
}
