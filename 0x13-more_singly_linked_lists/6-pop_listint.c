#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to head.
 * Return: n of the head.
 */


int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);




}
