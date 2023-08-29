#include"lists.h"
/**
 * add_nodeint_end - add node to end of list
 * @head: the listint_t to be added to.
 * @n: the value of node.
 * Return: the adress to the new element.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp;
	listint_t *tail;


	/*make new node*/
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head != NULL)
	{
		tail = *head;
	}
	else
	{
		*head = temp;
		return (temp);
	}

	/*find tail and add the node after*/
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;

		return (temp);


}
