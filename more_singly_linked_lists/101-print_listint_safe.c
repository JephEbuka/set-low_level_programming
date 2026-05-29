#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_loop_start - finds the start node of a loop in a list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts,
 *         or NULL if there is no loop
 */
static const listint_t *find_loop_start(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t list (handles loops)
 * @head: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_start;
	const listint_t *current;
	size_t count = 0;

	if (head == NULL)
		return (0);

	loop_start = find_loop_start(head);

	if (loop_start == NULL)
	{
		/* No loop: print normally */
		current = head;
		while (current != NULL)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			current = current->next;
		}
		return (count);
	}

	/* There is a loop: print nodes before loop_start */
	current = head;
	while (current != loop_start)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	/* Now print the loop: each node in the loop once */
	do {
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	} while (current != loop_start);

	/* Finally, show where the loop points back to */
	printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);

	return (count);
}
