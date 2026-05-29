#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - test all functions from more_singly_linked_lists
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node;
	int value;
	size_t count;

	head = NULL;

	/* Test add_nodeint_end */
	printf("Adding with add_nodeint_end:\n");
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);

	/* Test listint_len */
	count = listint_len(head);
	printf("Length of list: %lu\n", count);

	/* Test add_nodeint (add at beginning) */
	printf("Adding with add_nodeint at beginning:\n");
	add_nodeint(&head, -1);
	add_nodeint(&head, -2);
	print_listint(head);
	count = listint_len(head);
	printf("New length of list: %lu\n", count);

	/* Test get_nodeint_at_index */
	printf("Node at index 5:\n");
	node = get_nodeint_at_index(head, 5);
	if (node != NULL)
		printf("Value at index 5: %d\n", node->n);
	else
		printf("No node at index 5\n");

	/* Test pop_listint */
	printf("Popping nodes:\n");
	value = pop_listint(&head);
	printf("Popped: %d\n", value);
	value = pop_listint(&head);
	printf("Popped: %d\n", value);
	print_listint(head);

	/* Test free_listint2 */
	printf("Freeing list with free_listint2:\n");
	free_listint2(&head);
	printf("Head after free_listint2: %p\n", (void *)head);

	/* Test free_listint on a new list */
	printf("Creating new list to test free_listint:\n");
	add_nodeint_end(&head, 10);
	add_nodeint_end(&head, 20);
	add_nodeint_end(&head, 30);
	print_listint(head);
	printf("Freeing with free_listint:\n");
	free_listint(head);
	head = NULL;
	printf("Head after free_listint (manually set): %p\n", (void *)head);

	return (0);
}
