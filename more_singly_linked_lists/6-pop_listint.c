#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *               and returns the head node's data
 * @head: address of pointer to the head of the list
 *
 * Return: the data of the deleted head node,
 *         or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
