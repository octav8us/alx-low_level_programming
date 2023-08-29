#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return:  sum
 */



int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{

		sum += temp->n;
		temp = temp->next;
	}

	return (sum);



}
