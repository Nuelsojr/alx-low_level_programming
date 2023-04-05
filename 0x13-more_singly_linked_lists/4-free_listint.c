#include "lists.h"

void free_listint(listint_t *head)
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
