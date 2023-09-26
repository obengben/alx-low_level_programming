#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: head node
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp = *head;
	unsigned int n, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (n = 0; str[n] != '\0'; n++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
