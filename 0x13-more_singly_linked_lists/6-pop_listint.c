#include "lists.h"

int pop_listint(listint_t **head)
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *  Done : By Nuel
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
