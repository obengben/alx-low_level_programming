#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: head node
 * @str: string to store
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int n, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (n = 0; str[n] != '\0'; n++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
