#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int ex)
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @ex: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int ex)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (ex == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < ex - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
